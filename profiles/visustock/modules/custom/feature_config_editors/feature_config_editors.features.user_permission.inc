<?php
/**
 * @file
 * feature_config_editors.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_config_editors_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: administer imce.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(),
    'module' => 'imce',
  );

  // Exported permission: administer linkit.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(),
    'module' => 'linkit',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'Rédacteur' => 'Rédacteur',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
