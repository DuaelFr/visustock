<?php


/**
 * Implementation of hook_crumbs_plugins()
 */
function menu_crumbs_plugins($api) {
  $api->multiPlugin('hierarchy');
  $api->multiPlugin('link_title');
}


class menu_CrumbsMultiPlugin_hierarchy implements crumbs_MultiPlugin {

  function describe($api) {
    return menu_get_menus();
  }

  function disabledByDefault() {
    return array('*');
  }

  function findParent($path, $item) {

    $q = db_select('menu_links', 'parent');
    $q->innerJoin('menu_links', 'child', 'parent.mlid = child.plid');
    $q->addExpression('parent.link_path', 'parent_path');
    $q->addExpression('parent.menu_name', 'menu_name');
    $q->condition('child.link_path', $path);

    // Top-level links have higher priority.
    $q->orderBy('parent.depth', 'ASC');

    // Ignore placeholder or separator menu items added by special_menu_items.
    $q->condition('parent.link_path', array('<nolink>', '<separator>'), 'NOT IN');

    // Collect candidates for the parent path, keyed by menu name.
    $candidates = array();
    foreach ($q->execute() as $row) {
      if (!isset($candidates[$row->menu_name])) {
        $candidates[$row->menu_name] = $row->parent_path;
      }
    }
    return $candidates;
  }
}


class menu_CrumbsMultiPlugin_link_title implements crumbs_MultiPlugin {

  function describe($api) {
    return menu_get_menus();
  }

  function disabledByDefault() {
    return array('*');
  }

  /**
   * Find all menu links with $path as the link path.
   * For each menu, find the one with the lowest depth.
   */
  function findTitle($path, $item) {

    // We need to load the original title from menu_router,
    // because _menu_item_localize() does a decision based on that, that we want
    // to reproduce.
    $q = db_select('menu_router', 'mr');
    $q->condition('path', $item['path']);
    $q->fields('mr', array('title'));
    $router_title = $q->execute()->fetchField();

    // Reproduce menu_link_load() with _menu_link_translate() and
    // _menu_item_localize(). However, a lot of information is already provided
    // in the $item argument, so we can skip these steps.
    $q = db_select('menu_links', 'ml');
    $q->fields('ml');
    $q->condition('link_path', $path);
    $q->condition('router_path', $item['path']);

    // Top-level links have higher priority.
    $q->orderBy('ml.depth', 'ASC');

    $result = $q->execute();

    $titles = array();
    while ($row = $result->fetchAssoc()) {
      if (!isset($titles[$row['menu_name']])) {
        $link = $row + $item;
        if ($row['link_title'] == $router_title) {
          // Use the localized title from menu_router.
          // Fortunately, this is already computed by menu_get_item().
          $link['title'] = $item['title'];
        }
        else {
          // Use the untranslated title from menu_links.
          $link['title'] = $row['link_title'];
        }
        // Give other modules (e.g. i18n_menu) a chance to alter the title.
        drupal_alter('translated_menu_link', $link, $item['map']);
        $titles[$row['menu_name']] = $link['title'];
      }
    }
    return $titles;
  }
}
