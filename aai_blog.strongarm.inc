<?php
/**
 * @file
 * aai_blog.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function aai_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog_entry';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_entry_pattern';
  $strongarm->value = 'blog/[current-date:custom:Ym]/[node:title]';
  $export['pathauto_node_blog_entry_pattern'] = $strongarm;

  return $export;
}
