<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function imageboard_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:images
  $menu_links['features:images'] = array(
    'menu_name' => 'features',
    'link_path' => 'images',
    'router_path' => 'images',
    'link_title' => 'Images',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Images');


  return $menu_links;
}
