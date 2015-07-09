<?php
/**
 * @file
 * soe_jsa_related_page_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function soe_jsa_related_page_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'soe_jsa_page_related';
  $context->description = 'Related content on Stanford pages';
  $context->tag = 'SoE-JSA';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_page' => 'stanford_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_person_grid-block' => array(
          'module' => 'views',
          'delta' => 'stanford_person_grid-block',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'views-b0b97e4fb54df88f280eb220fef1829e' => array(
          'module' => 'views',
          'delta' => 'b0b97e4fb54df88f280eb220fef1829e',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-e1db4622d5599968122994300d2a6f47' => array(
          'module' => 'views',
          'delta' => 'e1db4622d5599968122994300d2a6f47',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Related content on Stanford pages');
  t('SoE-JSA');
  $export['soe_jsa_page_related'] = $context;

  return $export;
}
