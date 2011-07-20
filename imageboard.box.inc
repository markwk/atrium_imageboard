<?php

/**
 * Implementation of hook_default_box().
 */
function imageboard_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'imageboard_welcome';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome To The Gallery';
  $box->description = 'imageboard welcome box';
  $box->options = array(
    'body' => '<p>Welcome to the Image Gallery. Here you can find photos submitted by users.</p>',
    'format' => '3',
  );

  $export['imageboard_welcome'] = $box;
  return $export;
}
