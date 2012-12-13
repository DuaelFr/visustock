<?php
/**
 * @file
 * feature_config_editors.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function feature_config_editors_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'default';
  $linkit_profile->admin_title = 'Default';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'news' => 0,
        'page' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'imce' => array(
      'use_imce' => 1,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    2 => 1,
    193262079 => 1,
  );
  $linkit_profile->weight = 0;
  $export['default'] = $linkit_profile;

  return $export;
}
