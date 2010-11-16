<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function inc_localities_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function inc_localities_node_info() {
  $items = array(
    'loc' => array(
      'name' => t('Locality'),
      'module' => 'features',
      'description' => t('A Baha\'i community in a larger region such as a cluster or metropolitan area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Text'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
