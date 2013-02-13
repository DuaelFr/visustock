<?php
/**
 * @file
 * feature_config_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_config_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: access bean overview.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'bean',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'user',
  );

  // Exported permission: admin_classes.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer bean settings.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: administer bean types.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: administer beans.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'bean',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: administer devel menu items.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: administer features menu items.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: administer imagecrop.
  $permissions['administer imagecrop'] = array(
    'name' => 'administer imagecrop',
    'roles' => array(),
    'module' => 'imagecrop',
  );

  // Exported permission: administer main-menu menu items.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer management menu items.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: administer menu-footer-menu menu items.
  $permissions['administer menu-footer-menu menu items'] = array(
    'name' => 'administer menu-footer-menu menu items',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer navigation menu items.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: administer user-menu menu items.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: assign Administrateur role.
  $permissions['assign Administrateur role'] = array(
    'name' => 'assign Administrateur role',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Rédacteur role.
  $permissions['assign Rédacteur role'] = array(
    'name' => 'assign Rédacteur role',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign all roles.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: create any header bean.
  $permissions['create any header bean'] = array(
    'name' => 'create any header bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: create any simple bean.
  $permissions['create any simple bean'] = array(
    'name' => 'create any simple bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: crop any image.
  $permissions['crop any image'] = array(
    'name' => 'crop any image',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: crop own images.
  $permissions['crop own images'] = array(
    'name' => 'crop own images',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: delete any header bean.
  $permissions['delete any header bean'] = array(
    'name' => 'delete any header bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: delete any simple bean.
  $permissions['delete any simple bean'] = array(
    'name' => 'delete any simple bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: edit any header bean.
  $permissions['edit any header bean'] = array(
    'name' => 'edit any header bean',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit any simple bean.
  $permissions['edit any simple bean'] = array(
    'name' => 'edit any simple bean',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit bean view mode.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'metatag',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: view any header bean.
  $permissions['view any header bean'] = array(
    'name' => 'view any header bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: view any simple bean.
  $permissions['view any simple bean'] = array(
    'name' => 'view any simple bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: view bean page.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'bean',
  );

  // Exported permission: view bean revisions.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'system',
  );

  return $permissions;
}
