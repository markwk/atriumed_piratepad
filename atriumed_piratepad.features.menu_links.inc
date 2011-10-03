<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function atriumed_piratepad_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:writingpads
  $menu_links['features:writingpads'] = array(
    'menu_name' => 'features',
    'link_path' => 'writingpads',
    'router_path' => 'writingpads',
    'link_title' => 'EtherPads',
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
  t('EtherPads');


  return $menu_links;
}
