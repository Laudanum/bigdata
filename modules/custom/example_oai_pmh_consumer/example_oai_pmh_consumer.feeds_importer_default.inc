<?php
/**
 * @file
 * example_oai_pmh_consumer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function example_oai_pmh_consumer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'example_oai_phm';
  $feeds_importer->config = array(
    'name' => 'Example OAI-PHM',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsOAIHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'last_fetched_timestamp' => '',
        'earliest_timestamp' => '',
        'use_dates' => FALSE,
        'to' => array(),
        'from' => array(),
        'metadata_prefix' => 'oai_dc',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsOAIParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'person',
      ),
    ),
    'content_type' => 'oai_repository_dc',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['example_oai_phm'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'example_oai_phm_eac_cpf';
  $feeds_importer->config = array(
    'name' => 'Example OAI-PHM EAC-CPF',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'metadata/eac-cpf/cpfDescription/identity/nameEntry[1]/part[@localType="surname"][1]/text()',
          'xpathparser:1' => 'metadata/eac-cpf/cpfDescription/identity/nameEntry[1]/part[@localType="forename"][1]/text()',
          'xpathparser:2' => 'metadata/eac-cpf/cpfDescription/identity/nameEntry[1]/part[@localType="forename"][2]/text()',
          'xpathparser:3' => 'string(metadata/eac-cpf/cpfDescription/description/existDates/dateRange/fromDate/@standardDate)',
          'xpathparser:4' => 'metadata/eac-cpf/cpfDescription/alternativeSet/setComponent/objectXMLWrap/eac-cpf/cpfDescription/description/places[1]/place[1]/placeEntry[1]/text()',
          'xpathparser:5' => 'header/identifier/text()',
          'xpathparser:6' => '"$field_name:given" "$field_name:family"',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
        ),
        'context' => '/OAI-PMH/ListRecords/record',
        'exp' => array(
          'errors' => 1,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'context' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_name:family',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_name:given',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_name:middle',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_birthdate:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_birthcountry',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'person',
      ),
    ),
    'content_type' => 'oai_repository_eac_cpf',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['example_oai_phm_eac_cpf'] = $feeds_importer;

  return $export;
}
