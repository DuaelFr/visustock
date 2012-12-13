<?php
/**
 * @file
 * feature_context_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_context_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'All pages';
  $context->tag = 'Layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu',
          'weight' => '0',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages');
  t('Layout');
  $export['all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page only';
  $context->tag = 'Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-visustock-home-header' => array(
          'module' => 'bean',
          'delta' => 'visustock-home-header',
          'region' => 'header_first',
          'weight' => '0',
        ),
        'bean-visustock-home-block' => array(
          'module' => 'bean',
          'delta' => 'visustock-home-block',
          'region' => 'postscript_first',
          'weight' => '0',
        ),
        'views-news-home_block' => array(
          'module' => 'views',
          'delta' => 'news-home_block',
          'region' => 'postscript_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page only');
  t('Layout');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front';
  $context->description = 'All pages except front';
  $context->tag = 'Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'feature_context_base-visustock-spacer' => array(
          'module' => 'feature_context_base',
          'delta' => 'visustock-spacer',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'menu_block-visustock-second-level' => array(
          'module' => 'menu_block',
          'delta' => 'visustock-second-level',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'feature_context_base-visustock-header-title' => array(
          'module' => 'feature_context_base',
          'delta' => 'visustock-header-title',
          'region' => 'header_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages except front');
  t('Layout');
  $export['not-front'] = $context;

  return $export;
}
