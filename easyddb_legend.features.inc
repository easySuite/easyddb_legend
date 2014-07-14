<?php
/**
 * @file
 * easyddb_legend.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function easyddb_legend_default_page_manager_handlers_alter(&$data) {
  if (isset($data['ting_object_panel_context'])) {
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
    $data['ting_object_panel_context']->conf['display']->content['new-6'] = $pane;

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
    $data['ting_object_panel_context']->conf['display']->content['new-4'] = $pane;

    $data['ting_object_panel_context']->conf['display']->panels['main_content']['0'] = 'new-6';
    $data['ting_object_panel_context']->conf['display']->panels['main_content']['1'] = 'new-4';
  }
}
