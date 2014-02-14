<?php
/**
 * @file
 * example_oai_pmh_consumer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function example_oai_pmh_consumer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function example_oai_pmh_consumer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function example_oai_pmh_consumer_node_info() {
  $items = array(
    'oai_repository_dc' => array(
      'name' => t('OAI DC repository'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'oai_repository_eac_cpf' => array(
      'name' => t('OAI EAC repository'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
