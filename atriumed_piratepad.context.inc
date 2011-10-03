<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atriumed_piratepad_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'piratepad';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'piratepad' => 'piratepad',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'atriumed_piratepad' => 'atriumed_piratepad',
        'atriumed_piratepad:page_1' => 'atriumed_piratepad:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'wide',
    ),
    'menu' => 'writingpads',
  );
  $context->condition_mode = 0;
  $export['piratepad'] = $context;

  return $export;
}
