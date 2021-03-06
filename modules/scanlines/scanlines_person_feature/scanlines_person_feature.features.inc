<?php
/**
 * @file
 * scanlines_person_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function scanlines_person_feature_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
