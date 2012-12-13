<?php
/**
 * @file
 * feature_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_news_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_home.
  $styles['news_home'] = array(
    'name' => 'news_home',
    'effects' => array(
      4 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'news_large',
        ),
        'weight' => '-10',
      ),
      1 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '80',
          'height' => '80',
        ),
        'weight' => '-9',
      ),
    ),
  );

  // Exported image style: news_large.
  $styles['news_large'] = array(
    'name' => 'news_large',
    'effects' => array(
      2 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => '250',
          'height' => '250',
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 0,
          'downscaling' => 0,
          'aspect_ratio' => '',
          'disable_if_no_data' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: news_list.
  $styles['news_list'] = array(
    'name' => 'news_list',
    'effects' => array(
      5 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'news_large',
        ),
        'weight' => '1',
      ),
      6 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '150',
          'height' => '150',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Actualité'),
      'base' => 'node_content',
      'description' => t('Une actualité s\'affichant par défaut sur la page d\'accueil et toujours dans la liste des actualités.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
