<?php

/**
 * Implements hook_context_default_contexts().
 */
function az_flyout_context_default_contexts() {
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'az_flyout';
  $context->description = '';
  $context->tag = 'Arizona Flyout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'az_flyout-az_flyout' => array(
          'module' => 'az_flyout',
          'delta' => 'az_flyout',
          'region' => 'user_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  t('Arizona Flyout');

  $export['az_flyout'] = $context;

  return $export;
}