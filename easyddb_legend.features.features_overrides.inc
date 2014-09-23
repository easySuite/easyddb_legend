<?php
/**
 * @file
 * easyddb_legend.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function easyddb_legend_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();
  // Exported overrides for: page_manager_handlers
  $pane = new stdClass();
  $pane->pid = 'new-6';
  $pane->panel = 'main_content';
  $pane->type = 'block';
  $pane->subtype = 'ding_availability-legend';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $overrides["page_manager_handlers.ting_object_panel_context.conf|display|content|new-6"] = $pane;

  $pane = $pane = new stdClass();
  $pane->pid = 'new-4';
  $pane->panel = 'main_content';
  $pane->type = 'ting_object';
  $pane->subtype = 'ting_object';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_ting_object_id_17',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $overrides["page_manager_handlers.ting_object_panel_context.conf|display|content|new-6"] = $pane;

  $overrides["page_manager_handlers.ting_object_panel_context.conf|display|panels|main_content|0"] = 'new-6';
  $overrides["page_manager_handlers.ting_object_panel_context.conf|display|panels|main_content|1"] = 'new-4';

  return $overrides;
}
