<?php
/**
 * @file
 * content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_node_info() {
  $items = array(
    'market' => array(
      'name' => t('Market'),
      'base' => 'node_content',
      'description' => t('A market and all its associated information.'),
      'has_title' => '1',
      'title_label' => t('Market name'),
      'help' => '',
    ),
  );
  return $items;
}
