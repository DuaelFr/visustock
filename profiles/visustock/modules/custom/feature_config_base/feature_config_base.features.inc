<?php
/**
 * @file
 * feature_config_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_config_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_config_base_image_default_styles() {
  $styles = array();

  // Exported image style: header_large.
  $styles['header_large'] = array(
    'name' => 'header_large',
    'effects' => array(
      7 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '960',
          'height' => '260',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
