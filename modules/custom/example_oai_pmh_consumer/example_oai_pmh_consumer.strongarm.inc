<?php
/**
 * @file
 * example_oai_pmh_consumer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function example_oai_pmh_consumer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_oai_repository_dc';
  $strongarm->value = 0;
  $export['comment_anonymous_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_oai_repository_eac_cpf';
  $strongarm->value = 0;
  $export['comment_anonymous_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_oai_repository_dc';
  $strongarm->value = 1;
  $export['comment_default_mode_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_oai_repository_eac_cpf';
  $strongarm->value = 1;
  $export['comment_default_mode_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_oai_repository_dc';
  $strongarm->value = '50';
  $export['comment_default_per_page_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_oai_repository_eac_cpf';
  $strongarm->value = '50';
  $export['comment_default_per_page_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_oai_repository_dc';
  $strongarm->value = 1;
  $export['comment_form_location_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_oai_repository_eac_cpf';
  $strongarm->value = 1;
  $export['comment_form_location_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_oai_repository_dc';
  $strongarm->value = '1';
  $export['comment_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_oai_repository_eac_cpf';
  $strongarm->value = '1';
  $export['comment_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_oai_repository_dc';
  $strongarm->value = '1';
  $export['comment_preview_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_oai_repository_eac_cpf';
  $strongarm->value = '1';
  $export['comment_preview_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_oai_repository_dc';
  $strongarm->value = 1;
  $export['comment_subject_field_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_oai_repository_eac_cpf';
  $strongarm->value = 1;
  $export['comment_subject_field_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__oai_repository_dc';
  $strongarm->value = array();
  $export['field_bundle_settings_node__oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__oai_repository_eac_cpf';
  $strongarm->value = array();
  $export['field_bundle_settings_node__oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_oai_repository_dc';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_oai_repository_eac_cpf';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_oai_repository_dc';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_oai_repository_eac_cpf';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_oai_repository_dc';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_oai_repository_eac_cpf';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_oai_repository_dc';
  $strongarm->value = '1';
  $export['node_preview_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_oai_repository_eac_cpf';
  $strongarm->value = '1';
  $export['node_preview_oai_repository_eac_cpf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_oai_repository_dc';
  $strongarm->value = 0;
  $export['node_submitted_oai_repository_dc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_oai_repository_eac_cpf';
  $strongarm->value = 0;
  $export['node_submitted_oai_repository_eac_cpf'] = $strongarm;

  return $export;
}
