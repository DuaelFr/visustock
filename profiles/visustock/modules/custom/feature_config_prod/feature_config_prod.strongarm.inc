<?php
/**
 * @file
 * feature_config_prod.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_config_prod_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 1;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '0';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dblog_row_limit';
  $strongarm->value = '1000';
  $export['dblog_row_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    'e92b4740f6d9808b0ad5b9b59621ef857421e4284b267c96068bd18a54d3fcd6' => 'public://css/css_Pv26rLRUc1onvyBBC3QX03jjmVRbXBrehq6BRhVzUC8.css',
    '07bfb2be1f2c531f4692992378b4cf7abc790b1ecbb086001bc9438248038194' => 'public://css/css_VWrLwSDjeU_EhxTuxcAlK-TsV0POAZdohr3n0eOgexc.css',
    'fa07ef5281472b1db7c12938babb6ca157b37b2ac743027094d1316c4f3236a4' => 'public://css/css_RasbkxHKhaMMq34OTfVjzCR80ClqdXD5S9cwHlcyKYI.css',
    'b0f76029dcea4ae8c7ef22659afb2e0f1e0ada0ad878196d6b4aabb58075efa3' => 'public://css/css_quW47FRmfqvjanHOMKuGByzNkMTB8GEeRnQVveDnHK8.css',
    '0b844c6b1b41d67baa120c443d61f6a06ae333e4333db120c2339df64526ab6d' => 'public://css/css_rdy31axvuMyd90_XF7qntdSxMCa1O6l3zHEKJK9dDog.css',
    '468ea9ad26d1d19c208fdae69887a3df01598a0d1947a4cc23302ee32b250100' => 'public://css/css_nKQJdbA3MG_EgmEEYvJKPRKNf-haa11msDRwdP3Hl_A.css',
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_pbm0lsQQJ7A7WCCIMgxLho6mI_kBNgznNUWmTWcnfoE.css',
    'ca8e76d30590848abf82bc68f638c1f26cb78cb5d51877404b14441ef283c066' => 'public://css/css_botNHIYRQPys-RH2iA3U4LbV9bPNRS64tLAs8ec1ch8.css',
    '37fa99de085aaa9e9371905405fa033b0c7dedc5ef7d4704d23947264e408b5f' => 'public://css/css_8yG4h96Jc11L4cPW-jZIblMnT7Z5AMmJZnY2y4lqQXg.css',
    '39812cd870939c6950a1d4b21457d3815773b4ab1662b6da2010295e4ceaacde' => 'public://css/css_sVUUoiWVwflqbb8ZeP3_JXTIbBp3YVAaZ2-yFZfYchc.css',
    '04713970e03cf535a553bd1e0bbd3d6cf31b75ace6fa457236f2ef4935516623' => 'public://css/css_TakrVVXHFp9nF2pq_sRgS_kl3feJew53veJxGVE9rIo.css',
    '443df2781ef6e9c6881672aa76137577bdd38150ebf57221e4c45327bca3249b' => 'public://css/css_KQiXmEvISdhE2UQ4zeec2TNfnOhhaQrnqS1k77kVBrA.css',
    'd5088c070d78e5e7b300ac96ba0ccdfa91325d2acba3526a04487b4f0e0dbcad' => 'public://css/css_egDNHX9sWFvobxEKJUWf-PTra2i5nxJOu_wIjm1fSyc.css',
    'b1f6b32b4676edffc5875a76f98536c511572ae0269ca4753895f1aaa0554e65' => 'public://css/css_EbwNfzJmadWvyfeNELiHJR6ebp0JXvNzdW-tKa2IC-w.css',
    'b4b3588ebef61eb74415fa32a560599d0eeb765a4859d695df6845c8ea18d160' => 'public://css/css_W1YSNZkcxTmFoiqlFhlD_KBnT3f_oLT8Rf0XKelMQPI.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'ab825633a66c1131c2525d95d738171329fba852993dccf14838f0ada6242ff0' => 'public://js/js_0CvYFhCbdAhJwSPnhJ3sWun6ADw4lakn-w11d8RRGSw.js',
    '111d860265abe08204bdf363fb75e432b0104dd26ec9ad3853b748098098279b' => 'public://js/js_KCd8rbJYUruV1tRJnh4um34UYvyhlrSVCPR1jNko2h8.js',
    'a9e59ee9b42bae5cd9eedce9d81a13b99459f43ebab10cb36c7174bc2e3ba4a5' => 'public://js/js_OrxgXH4HPqUh-ZwPJBZjRVCfli7oTILW04vLCpFl0vw.js',
    'cd890d1f6bcb2ef78d223b3e80b4eb101399f36d42879ff3d1b0b4fce8902b5c' => 'public://js/js_x2UM77G376MvoUciBfL6QGz5QQb87ydkBvgDxvtNfr8.js',
    '86d4f4cac5e1f239213abd7d6d4f387d11012564b751a6db65c1c4fd46ecb3f2' => 'public://js/js_upeyRlrITbkeP-7Lwx64sdP--2aBthf809GOvdbK1pw.js',
    '8566767fcca06bc412f212d194e0d2a98d16bd805e45a68324fe324bf8c3db77' => 'public://js/js_DpAHEds7zipvsWN4wtrlzDnIdUl-EBSeXQFenQynslc.js',
    '4d04a0997b8577da11b99ebc5823f1281125eca19b1574e06bfc0a3cd8401c29' => 'public://js/js_0nlshe5RVtmEErmTuoJKMuEAh1idWkWDsrRXYfqpGtw.js',
    'b57fd0558517acc52c6ace02d08a753528561605f782032ace60e27043799861' => 'public://js/js_RGuHjsrGysbOv2nWzdv2vsmuMCkYHHyVA9Rz1utJzIQ.js',
    '3c6b1b4fc6dbbbca9464abddb1c020a3f3441183fb00c2414ad134a8f559e387' => 'public://js/js_C54rNThcr44q4Js7OlnvkjfAGlVv2US5w3uSXNoo4UE.js',
    '1bd0b8547808a6f70fc1ecd95b7c9a902e73cea263713cf885b3870f49556efa' => 'public://js/js_PuRmUxflJp2cUS84gBYPX4pXu4LthT2Z4RlZ_UMvx-8.js',
    '77c36ede628b74132d7dba3fbe8efcc79c3f73d647b067e35f639e99081fc3ad' => 'public://js/js_scJq4aUMHsddWNKWUIQQzc0qqJC7-byIzPtIhbKdFeY.js',
    '951e0ace3129bf6fdbde2eedf347fa2822faa537de73c689004014561431f5bd' => 'public://js/js_77J37CSlyPWjcNPfFqfufLOi2Y7VXEnFbbFWjhAb5fs.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '0';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'feature_context_base' => array(
      'dependencies' => '84395c652a81257068b7bab5fcd2e866',
      'context' => '05ef88bf96368f343981ebbad5436d64',
    ),
    'feature_config_locale' => array(
      'language' => '2697ec5955f8235a059e1eef84a6e294',
      'dependencies' => 'a68bca495e93ad46393b8098dc1ec4a7',
      'user_permission' => 'c597f12ad1dac0130096da7c3b4dc37e',
    ),
    'feature_config_base' => array(
      'variable' => 'e1d2f17b519002a10d3d796fc30049c6',
      'user_role' => 'd3b7eadb227830e1641c8793ed9b36c0',
      'dependencies' => 'b8eb044e905b04fe9ac6a46863c3bfc3',
      'menu_custom' => 'e85c2b9d3d8aaff117637d60be584534',
      'bean_type' => 'd976faedbe032856b38d721aa934741a',
      'field' => 'f8db26916ee55e2f9aef957a9f993eec',
      'image' => '0437712c1ea2a239e3609cb7e92cd6d1',
      'user_permission' => '9c76d96038f9d05f42c8746c3fd311bb',
    ),
    'feature_config_editors' => array(
      'variable' => 'bf8351889d04792a3e79484eb8c5cd09',
      'filter' => '3664380507350a5c95edd001a82a7614',
      'wysiwyg' => '300d11178a4126efea1389976aae8521',
      'dependencies' => '39a5e95690cba5f8bfa5bdb90bb1d689',
      'linkit_profiles' => 'bbddf980abd5f381b3176f57ad30a5b3',
      'user_permission' => 'ecc74fb63d5a86584e1699a94a166e32',
    ),
    'feature_news' => array(
      'dependencies' => '1011d44093d7b2f9a2535df4875de3fc',
      'node' => '1c09d689cd2f6c34c820e433c6da14b6',
      'views_view' => '6de3e1f1d16b9e0fe702882341121622',
      'variable' => '3cef3d55f525efd5aa7829bb886ca98d',
      'field' => 'a9d944c346b1ec3232f9a7f7624ef1c8',
      'ds_field_settings' => '0a6cdc9fa9c27fb0dcc32eeff778d1b2',
      'ds_layout_settings' => '374e88a5aa96dc750b1d44e2e66f45d5',
      'field_group' => '57cf511be00d61894151360e4ce9ec7d',
      'context' => '5eb9d037b1562649e6cf3e5f68388927',
      'image' => '0ae2b4c33615fa8f474a94ff1025ef50',
      'user_permission' => 'ea3ccbc55a40fccedb215e001bb77cf0',
    ),
    'feature_pages' => array(
      'dependencies' => 'b8f411ed2da331335aa3bc284568eb47',
      'node' => 'f10fe19670f5be975a7bc48e492a7e88',
      'variable' => '15d14af1f05d248fde84f3f5934d74be',
      'field' => '681546164373e8758e9ad027fa8d0acc',
      'user_permission' => '9ff37ee3cae787a0fa442def5c5a81dd',
    ),
    'feature_forms' => array(
      'variable' => '25e7a9e79199f9ce93d19c5a3cf82938',
      'uuid_node' => 'b6425e45bf207181e08b54fad05711c3',
      'field' => '2b797f9ef01ba57a780bb675aa81428f',
      'user_permission' => '4420fb3a36a58876949ef700910f411b',
      'dependencies' => 'a5d8709ab7a1c21942b3d75819b072ac',
      'node' => '353c750c455eeab873f4ffd4c51876db',
    ),
    'feature_config_seo' => array(
      'dependencies' => '3891df0a38a015d999d0d8d92aa0d75e',
      'variable' => '120d50e9bb55684f5de917c455868af4',
      'user_permission' => '4b8ef26cd4fabd292183eddabf134403',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'google';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 1;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  return $export;
}
