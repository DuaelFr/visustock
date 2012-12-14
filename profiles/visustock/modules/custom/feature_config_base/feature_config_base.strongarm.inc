<?php
/**
 * @file
 * feature_config_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_config_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_caption_trim';
  $strongarm->value = '0';
  $export['colorbox_caption_trim'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_caption_trim_length';
  $strongarm->value = '75';
  $export['colorbox_caption_trim_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_compression_type';
  $strongarm->value = 'minified';
  $export['colorbox_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_custom_settings_activate';
  $strongarm->value = '0';
  $export['colorbox_custom_settings_activate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_fixed';
  $strongarm->value = 1;
  $export['colorbox_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_initialheight';
  $strongarm->value = '250';
  $export['colorbox_initialheight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_initialwidth';
  $strongarm->value = '300';
  $export['colorbox_initialwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_inline';
  $strongarm->value = 0;
  $export['colorbox_inline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = 0;
  $export['colorbox_load'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_maxheight';
  $strongarm->value = '98%';
  $export['colorbox_maxheight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_maxwidth';
  $strongarm->value = '98%';
  $export['colorbox_maxwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_opacity';
  $strongarm->value = '0.85';
  $export['colorbox_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_overlayclose';
  $strongarm->value = 1;
  $export['colorbox_overlayclose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_pages';
  $strongarm->value = 'admin*
imagebrowser*
img_assist*
imce*
print/*
printpdf/*
system/ajax
system/ajax/*';
  $export['colorbox_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_scrolling';
  $strongarm->value = '1';
  $export['colorbox_scrolling'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshow';
  $strongarm->value = '0';
  $export['colorbox_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshowauto';
  $strongarm->value = 1;
  $export['colorbox_slideshowauto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshowspeed';
  $strongarm->value = '2500';
  $export['colorbox_slideshowspeed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_style';
  $strongarm->value = 'default';
  $export['colorbox_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_close';
  $strongarm->value = 'Close';
  $export['colorbox_text_close'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_current';
  $strongarm->value = '{current} of {total}';
  $export['colorbox_text_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_next';
  $strongarm->value = 'Next »';
  $export['colorbox_text_next'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_previous';
  $strongarm->value = '« Prev';
  $export['colorbox_text_previous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_start';
  $strongarm->value = 'start slideshow';
  $export['colorbox_text_start'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_stop';
  $strongarm->value = 'stop slideshow';
  $export['colorbox_text_stop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_transition_speed';
  $strongarm->value = '350';
  $export['colorbox_transition_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_transition_type';
  $strongarm->value = 'elastic';
  $export['colorbox_transition_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_visibility';
  $strongarm->value = '0';
  $export['colorbox_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = 0;
  $export['configurable_timezones'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '0';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Paris';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_long';
  $strongarm->value = 'l j F Y';
  $export['date_format_date_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_medium';
  $strongarm->value = 'j F Y';
  $export['date_format_date_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_short';
  $strongarm->value = 'd/m/Y';
  $export['date_format_date_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, j F, Y - H:i';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, d/m/Y - H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'd/m/Y - H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = 'tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_modules';
  $strongarm->value = array(
    'profile_picture' => 0,
    'media' => 0,
  );
  $export['imagecrop_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_popup';
  $strongarm->value = 'imagecrop_colorbox';
  $export['imagecrop_popup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_popup_height';
  $strongarm->value = '600';
  $export['imagecrop_popup_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_popup_width';
  $strongarm->value = '700';
  $export['imagecrop_popup_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_rotation';
  $strongarm->value = 0;
  $export['imagecrop_rotation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_scale_default';
  $strongarm->value = 1;
  $export['imagecrop_scale_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_scale_step';
  $strongarm->value = '50';
  $export['imagecrop_scale_step'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_show_cancel_button';
  $strongarm->value = 1;
  $export['imagecrop_show_cancel_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_skip_preview';
  $strongarm->value = 1;
  $export['imagecrop_skip_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_theme';
  $strongarm->value = 'admin_theme';
  $export['imagecrop_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_ui_controls';
  $strongarm->value = 0;
  $export['imagecrop_ui_controls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'FR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'frontpage';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_visustock_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => '1',
    'toggle_comment_user_picture' => '1',
    'toggle_comment_user_verification' => '1',
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'alpha_grid' => 'alpha_default',
    'alpha_responsive' => 0,
    'alpha_viewport' => 1,
    'alpha_viewport_initial_scale' => '1',
    'alpha_viewport_min_scale' => '1',
    'alpha_viewport_max_scale' => '1',
    'alpha_viewport_user_scaleable' => 0,
    'alpha_primary_alpha_default' => 'normal',
    'alpha_layouts_alpha_default_narrow_responsive' => 1,
    'alpha_layouts_alpha_default_narrow_weight' => '1',
    'alpha_layouts_alpha_default_narrow_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_normal_responsive' => 1,
    'alpha_layouts_alpha_default_normal_weight' => '2',
    'alpha_layouts_alpha_default_normal_media' => 'all and (min-width: 980px) and (min-device-width: 980px), all and (max-device-width: 1024px) and (min-width: 1024px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_wide_responsive' => 1,
    'alpha_layouts_alpha_default_wide_weight' => '3',
    'alpha_layouts_alpha_default_wide_media' => 'all and (min-width: 1220px)',
    'alpha_layouts_alpha_default_fluid_responsive' => 0,
    'alpha_layouts_alpha_default_fluid_weight' => '0',
    'alpha_layouts_alpha_default_fluid_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_primary_alpha_fluid' => 'normal',
    'alpha_layouts_alpha_fluid_normal_responsive' => 0,
    'alpha_layouts_alpha_fluid_normal_weight' => '0',
    'alpha_layouts_alpha_fluid_normal_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_libraries' => array(
      'omega_formalize' => 'omega_formalize',
      'omega_mediaqueries' => 'omega_mediaqueries',
      'omega_equalheights' => 0,
    ),
    'alpha_css' => array(
      'alpha-reset.css' => 'alpha-reset.css',
      'alpha-mobile.css' => 'alpha-mobile.css',
      'alpha-alpha.css' => 'alpha-alpha.css',
      'omega-text.css' => 'omega-text.css',
      'omega-branding.css' => 'omega-branding.css',
      'omega-menu.css' => 'omega-menu.css',
      'omega-forms.css' => 'omega-forms.css',
      'omega-visuals.css' => 'omega-visuals.css',
      'global.css' => 'global.css',
    ),
    'alpha_exclude' => array(
      'modules/field/theme/field.css' => 0,
      'modules/node/node.css' => 0,
      'modules/user/user.css' => 0,
      'sites/all/modules/contrib/views/css/views.css' => 0,
      'misc/vertical-tabs.css' => 0,
      'modules/aggregator/aggregator.css' => 0,
      'modules/block/block.css' => 0,
      'modules/dblog/dblog.css' => 0,
      'modules/file/file.css' => 0,
      'modules/filter/filter.css' => 0,
      'modules/help/help.css' => 0,
      'modules/menu/menu.css' => 0,
      'modules/openid/openid.css' => 0,
      'modules/profile/profile.css' => 0,
      'modules/statistics/statistics.css' => 0,
      'modules/syslog/syslog.css' => 0,
      'modules/system/admin.css' => 0,
      'modules/system/maintenance.css' => 0,
      'modules/system/system.css' => 0,
      'modules/system/system.admin.css' => 0,
      'modules/system/system.base.css' => 0,
      'modules/system/system.maintenance.css' => 0,
      'modules/system/system.menus.css' => 0,
      'modules/system/system.messages.css' => 0,
      'modules/system/system.theme.css' => 0,
      'modules/taxonomy/taxonomy.css' => 0,
      'modules/tracker/tracker.css' => 0,
      'modules/update/update.css' => 0,
    ),
    'alpha_debug_block_toggle' => 0,
    'alpha_debug_block_active' => 0,
    'alpha_debug_grid_toggle' => 0,
    'alpha_debug_grid_active' => 0,
    'alpha_debug_grid_roles' => array(
      1 => 0,
      2 => 0,
      193262079 => 0,
    ),
    'alpha_toggle_messages' => 1,
    'alpha_toggle_action_links' => 1,
    'alpha_toggle_tabs' => 1,
    'alpha_toggle_breadcrumb' => 0,
    'alpha_toggle_page_title' => 1,
    'alpha_toggle_feed_icons' => 0,
    'alpha_hidden_title' => 0,
    'alpha_hidden_site_name' => 0,
    'alpha_hidden_site_slogan' => 0,
    'alpha_region_footer_second_force' => 0,
    'alpha_region_footer_second_zone' => NULL,
    'alpha_region_footer_second_prefix' => '0',
    'alpha_region_footer_second_columns' => '12',
    'alpha_region_footer_second_suffix' => '0',
    'alpha_region_footer_second_weight' => '2',
    'alpha_region_footer_second_position' => '0',
    'alpha_region_footer_second_css' => '',
    'alpha_region_footer_second_equal_height_element' => FALSE,
    'alpha_region_footer_second_equal_height_container' => 0,
    'alpha_region_header_second_force' => 0,
    'alpha_region_header_second_zone' => NULL,
    'alpha_region_header_second_prefix' => '0',
    'alpha_region_header_second_columns' => '6',
    'alpha_region_header_second_suffix' => '0',
    'alpha_region_header_second_weight' => '2',
    'alpha_region_header_second_position' => '0',
    'alpha_region_header_second_css' => '',
    'alpha_region_header_second_equal_height_element' => FALSE,
    'alpha_region_header_second_equal_height_container' => 0,
    'alpha_region_postscript_third_force' => 0,
    'alpha_region_postscript_third_zone' => NULL,
    'alpha_region_postscript_third_prefix' => '0',
    'alpha_region_postscript_third_columns' => '3',
    'alpha_region_postscript_third_suffix' => '0',
    'alpha_region_postscript_third_weight' => '3',
    'alpha_region_postscript_third_position' => '0',
    'alpha_region_postscript_third_css' => '',
    'alpha_region_postscript_third_equal_height_element' => FALSE,
    'alpha_region_postscript_third_equal_height_container' => 0,
    'alpha_region_sidebar_second_force' => 0,
    'alpha_region_sidebar_second_zone' => NULL,
    'alpha_region_sidebar_second_prefix' => '0',
    'alpha_region_sidebar_second_columns' => '3',
    'alpha_region_sidebar_second_suffix' => '0',
    'alpha_region_sidebar_second_weight' => '3',
    'alpha_region_sidebar_second_position' => '0',
    'alpha_region_sidebar_second_css' => '',
    'alpha_region_sidebar_second_equal_height_element' => FALSE,
    'alpha_region_sidebar_second_equal_height_container' => 0,
    'alpha_region_postscript_fourth_force' => 0,
    'alpha_region_postscript_fourth_zone' => NULL,
    'alpha_region_postscript_fourth_prefix' => '0',
    'alpha_region_postscript_fourth_columns' => '3',
    'alpha_region_postscript_fourth_suffix' => '0',
    'alpha_region_postscript_fourth_weight' => '4',
    'alpha_region_postscript_fourth_position' => '0',
    'alpha_region_postscript_fourth_css' => '',
    'alpha_region_postscript_fourth_equal_height_element' => FALSE,
    'alpha_region_postscript_fourth_equal_height_container' => 0,
    'alpha_zone_preface_wrapper' => 1,
    'alpha_zone_preface_force' => 0,
    'alpha_zone_preface_order' => 0,
    'alpha_zone_preface_section' => NULL,
    'alpha_zone_preface_weight' => '1',
    'alpha_zone_preface_columns' => '12',
    'alpha_zone_preface_primary' => NULL,
    'alpha_zone_preface_css' => '',
    'alpha_zone_preface_wrapper_css' => '',
    'alpha_zone_preface_equal_height_container' => 0,
    'alpha_region_preface_first_force' => 0,
    'alpha_region_preface_first_zone' => 'preface',
    'alpha_region_preface_first_prefix' => '0',
    'alpha_region_preface_first_columns' => '4',
    'alpha_region_preface_first_suffix' => '0',
    'alpha_region_preface_first_weight' => '1',
    'alpha_region_preface_first_position' => '0',
    'alpha_region_preface_first_css' => '',
    'alpha_region_preface_first_equal_height_element' => 0,
    'alpha_region_preface_first_equal_height_container' => 0,
    'alpha_region_preface_second_force' => 0,
    'alpha_region_preface_second_zone' => 'preface',
    'alpha_region_preface_second_prefix' => '0',
    'alpha_region_preface_second_columns' => '4',
    'alpha_region_preface_second_suffix' => '0',
    'alpha_region_preface_second_weight' => '2',
    'alpha_region_preface_second_position' => '0',
    'alpha_region_preface_second_css' => '',
    'alpha_region_preface_second_equal_height_element' => 0,
    'alpha_region_preface_second_equal_height_container' => 0,
    'alpha_region_preface_third_force' => 0,
    'alpha_region_preface_third_zone' => 'preface',
    'alpha_region_preface_third_prefix' => '0',
    'alpha_region_preface_third_columns' => '4',
    'alpha_region_preface_third_suffix' => '0',
    'alpha_region_preface_third_weight' => '3',
    'alpha_region_preface_third_position' => '0',
    'alpha_region_preface_third_css' => '',
    'alpha_region_preface_third_equal_height_element' => 0,
    'alpha_region_preface_third_equal_height_container' => 0,
    'alpha_zone_user_wrapper' => 1,
    'alpha_zone_user_force' => 0,
    'alpha_zone_user_order' => 0,
    'alpha_zone_user_section' => NULL,
    'alpha_zone_user_weight' => '1',
    'alpha_zone_user_columns' => '12',
    'alpha_zone_user_primary' => NULL,
    'alpha_zone_user_css' => '',
    'alpha_zone_user_wrapper_css' => '',
    'alpha_zone_user_equal_height_container' => 0,
    'alpha_region_user_first_force' => 0,
    'alpha_region_user_first_zone' => 'user',
    'alpha_region_user_first_prefix' => '0',
    'alpha_region_user_first_columns' => '8',
    'alpha_region_user_first_suffix' => '0',
    'alpha_region_user_first_weight' => '1',
    'alpha_region_user_first_position' => '0',
    'alpha_region_user_first_css' => '',
    'alpha_region_user_first_equal_height_element' => 0,
    'alpha_region_user_first_equal_height_container' => 0,
    'alpha_region_user_second_force' => 0,
    'alpha_region_user_second_zone' => 'user',
    'alpha_region_user_second_prefix' => '0',
    'alpha_region_user_second_columns' => '4',
    'alpha_region_user_second_suffix' => '0',
    'alpha_region_user_second_weight' => '2',
    'alpha_region_user_second_position' => '0',
    'alpha_region_user_second_css' => '',
    'alpha_region_user_second_equal_height_element' => 0,
    'alpha_region_user_second_equal_height_container' => 0,
    'alpha_zone_menu_wrapper' => 1,
    'alpha_zone_menu_force' => 0,
    'alpha_zone_menu_order' => 0,
    'alpha_zone_menu_section' => NULL,
    'alpha_zone_menu_weight' => '3',
    'alpha_zone_menu_columns' => '12',
    'alpha_zone_menu_primary' => NULL,
    'alpha_zone_menu_css' => '',
    'alpha_zone_menu_wrapper_css' => '',
    'alpha_zone_menu_equal_height_container' => 0,
    'alpha_zone_branding_wrapper' => 1,
    'alpha_zone_branding_force' => 0,
    'alpha_zone_branding_order' => 0,
    'alpha_zone_branding_section' => 'header',
    'alpha_zone_branding_weight' => '2',
    'alpha_zone_branding_columns' => '16',
    'alpha_zone_branding_primary' => NULL,
    'alpha_zone_branding_css' => '',
    'alpha_zone_branding_wrapper_css' => '',
    'alpha_zone_branding_equal_height_container' => 0,
    'alpha_region_branding_force' => 1,
    'alpha_region_branding_zone' => 'branding',
    'alpha_region_branding_prefix' => '0',
    'alpha_region_branding_columns' => '2',
    'alpha_region_branding_suffix' => '0',
    'alpha_region_branding_weight' => '1',
    'alpha_region_branding_position' => '0',
    'alpha_region_branding_css' => '',
    'alpha_region_branding_equal_height_element' => 0,
    'alpha_region_branding_equal_height_container' => 0,
    'alpha_region_menu_force' => 1,
    'alpha_region_menu_zone' => 'branding',
    'alpha_region_menu_prefix' => '0',
    'alpha_region_menu_columns' => '14',
    'alpha_region_menu_suffix' => '0',
    'alpha_region_menu_weight' => '2',
    'alpha_region_menu_position' => '0',
    'alpha_region_menu_css' => '',
    'alpha_region_menu_equal_height_element' => 0,
    'alpha_region_menu_equal_height_container' => 0,
    'alpha_zone_header_wrapper' => 1,
    'alpha_zone_header_force' => 0,
    'alpha_zone_header_order' => 0,
    'alpha_zone_header_section' => 'header',
    'alpha_zone_header_weight' => '4',
    'alpha_zone_header_columns' => '16',
    'alpha_zone_header_primary' => NULL,
    'alpha_zone_header_css' => '',
    'alpha_zone_header_wrapper_css' => '',
    'alpha_zone_header_equal_height_container' => 0,
    'alpha_region_header_first_force' => 0,
    'alpha_region_header_first_zone' => 'header',
    'alpha_region_header_first_prefix' => '0',
    'alpha_region_header_first_columns' => '16',
    'alpha_region_header_first_suffix' => '0',
    'alpha_region_header_first_weight' => '1',
    'alpha_region_header_first_position' => '0',
    'alpha_region_header_first_css' => '',
    'alpha_region_header_first_equal_height_element' => 0,
    'alpha_region_header_first_equal_height_container' => 0,
    'alpha_zone_content_wrapper' => 1,
    'alpha_zone_content_force' => 1,
    'alpha_zone_content_order' => 0,
    'alpha_zone_content_section' => 'content',
    'alpha_zone_content_weight' => '2',
    'alpha_zone_content_columns' => '16',
    'alpha_zone_content_primary' => 'content',
    'alpha_zone_content_css' => '',
    'alpha_zone_content_wrapper_css' => '',
    'alpha_zone_content_equal_height_container' => 0,
    'alpha_region_sidebar_first_force' => 0,
    'alpha_region_sidebar_first_zone' => 'content',
    'alpha_region_sidebar_first_prefix' => '0',
    'alpha_region_sidebar_first_columns' => '5',
    'alpha_region_sidebar_first_suffix' => '0',
    'alpha_region_sidebar_first_weight' => '1',
    'alpha_region_sidebar_first_position' => '0',
    'alpha_region_sidebar_first_css' => '',
    'alpha_region_sidebar_first_equal_height_element' => 0,
    'alpha_region_sidebar_first_equal_height_container' => 0,
    'alpha_region_content_force' => 0,
    'alpha_region_content_zone' => 'content',
    'alpha_region_content_prefix' => '0',
    'alpha_region_content_columns' => '11',
    'alpha_region_content_suffix' => '0',
    'alpha_region_content_weight' => '2',
    'alpha_region_content_position' => '0',
    'alpha_region_content_css' => '',
    'alpha_region_content_equal_height_element' => 0,
    'alpha_region_content_equal_height_container' => 0,
    'alpha_zone_postscript_wrapper' => 1,
    'alpha_zone_postscript_force' => 0,
    'alpha_zone_postscript_order' => 0,
    'alpha_zone_postscript_section' => 'content',
    'alpha_zone_postscript_weight' => '3',
    'alpha_zone_postscript_columns' => '16',
    'alpha_zone_postscript_primary' => NULL,
    'alpha_zone_postscript_css' => '',
    'alpha_zone_postscript_wrapper_css' => '',
    'alpha_zone_postscript_equal_height_container' => 0,
    'alpha_region_postscript_first_force' => 0,
    'alpha_region_postscript_first_zone' => 'postscript',
    'alpha_region_postscript_first_prefix' => '0',
    'alpha_region_postscript_first_columns' => '9',
    'alpha_region_postscript_first_suffix' => '0',
    'alpha_region_postscript_first_weight' => '1',
    'alpha_region_postscript_first_position' => '0',
    'alpha_region_postscript_first_css' => '',
    'alpha_region_postscript_first_equal_height_element' => 0,
    'alpha_region_postscript_first_equal_height_container' => 0,
    'alpha_region_postscript_second_force' => 0,
    'alpha_region_postscript_second_zone' => 'postscript',
    'alpha_region_postscript_second_prefix' => '1',
    'alpha_region_postscript_second_columns' => '6',
    'alpha_region_postscript_second_suffix' => '0',
    'alpha_region_postscript_second_weight' => '2',
    'alpha_region_postscript_second_position' => '0',
    'alpha_region_postscript_second_css' => '',
    'alpha_region_postscript_second_equal_height_element' => 0,
    'alpha_region_postscript_second_equal_height_container' => 0,
    'alpha_zone_footer_wrapper' => 1,
    'alpha_zone_footer_force' => 0,
    'alpha_zone_footer_order' => 0,
    'alpha_zone_footer_section' => 'footer',
    'alpha_zone_footer_weight' => '1',
    'alpha_zone_footer_columns' => '16',
    'alpha_zone_footer_primary' => NULL,
    'alpha_zone_footer_css' => '',
    'alpha_zone_footer_wrapper_css' => '',
    'alpha_zone_footer_equal_height_container' => 0,
    'alpha_region_footer_first_force' => 0,
    'alpha_region_footer_first_zone' => 'footer',
    'alpha_region_footer_first_prefix' => '0',
    'alpha_region_footer_first_columns' => '16',
    'alpha_region_footer_first_suffix' => '0',
    'alpha_region_footer_first_weight' => '1',
    'alpha_region_footer_first_position' => '0',
    'alpha_region_footer_first_css' => '',
    'alpha_region_footer_first_equal_height_element' => 0,
    'alpha_region_footer_first_equal_height_container' => 0,
  );
  $export['theme_visustock_settings'] = $strongarm;

  return $export;
}
