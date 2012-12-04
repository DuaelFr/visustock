<?php
/**
 * @file
 * feature_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page standard'),
      'base' => 'node_content',
      'description' => t('Une page standard est destinée à contenir des informations intemporelles.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
