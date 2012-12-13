<?php
/**
 * @file
 * feature_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = 'All news pages';
  $context->tag = 'Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'feature_news-visustock-back-news' => array(
          'module' => 'feature_news',
          'delta' => 'visustock-back-news',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All news pages');
  t('Types');
  $export['news'] = $context;

  return $export;
}
