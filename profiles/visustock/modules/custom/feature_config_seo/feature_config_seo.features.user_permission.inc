<?php
/**
 * @file
 * feature_config_seo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_config_seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Administrateur' => 'Administrateur',
    ),
    'module' => 'redirect',
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

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  return $permissions;
}
