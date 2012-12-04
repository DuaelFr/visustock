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
