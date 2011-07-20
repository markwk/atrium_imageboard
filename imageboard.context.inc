<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function imageboard_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-imageboard';
  $context->description = 'imageboard main view context';
  $context->tag = 'imageboard';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'image' => 'image',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'imageboard' => 'imageboard',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-imageboard_welcome' => array(
          'module' => 'boxes',
          'delta' => 'imageboard_welcome',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-imageboard-block_1' => array(
          'module' => 'views',
          'delta' => 'imageboard-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-recent_image_comments-block' => array(
          'module' => 'views',
          'delta' => 'recent_image_comments-block',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('imageboard');
  t('imageboard main view context');

  $export['spaces-feature-imageboard'] = $context;
  return $export;
}
