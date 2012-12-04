<?php
/**
 * @file
 * feature_config_base.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function feature_config_base_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'simple';
  $bean_type->label = 'Simple';
  $bean_type->options = '';
  $bean_type->description = 'Bloc simple avec un contenu textuel enrichi.';
  $export['simple'] = $bean_type;

  return $export;
}
