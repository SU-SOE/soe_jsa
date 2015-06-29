<?php
/**
 * @file
 * soe_jsa_related_events_upcoming_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function soe_jsa_related_events_upcoming_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'soe_jsa_events_upcoming_related';
  $context->description = 'Upcoming Events page in Events section for related content';
  $context->tag = 'SoE-JSA';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/upcoming-events/related-content' => 'events/upcoming-events/related-content',
        'news-events/upcoming-events' => 'news-events/upcoming-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ebe288ca12a13e55a34e0db9fbc9ef41' => array(
          'module' => 'views',
          'delta' => 'ebe288ca12a13e55a34e0db9fbc9ef41',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('SoE-JSA');
  t('Upcoming Events page in Events section for related content');
  $export['soe_jsa_events_upcoming_related'] = $context;

  return $export;
}
