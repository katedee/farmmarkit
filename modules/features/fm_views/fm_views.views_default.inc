<?php
/**
 * @file
 * fm_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fm_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'markets_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Markets list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Markets list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_day',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'test';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: market (field_market) - reverse */
  $handler->display->display_options['relationships']['reverse_field_market_node']['id'] = 'reverse_field_market_node';
  $handler->display->display_options['relationships']['reverse_field_market_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_market_node']['field'] = 'reverse_field_market_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_end_time']['id'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['table'] = 'field_data_field_end_time';
  $handler->display->display_options['fields']['field_end_time']['field'] = 'field_end_time';
  $handler->display->display_options['fields']['field_end_time']['element_label_colon'] = FALSE;
  /* Field: Content: Start Time */
  $handler->display->display_options['fields']['field_start_time']['id'] = 'field_start_time';
  $handler->display->display_options['fields']['field_start_time']['table'] = 'field_data_field_start_time';
  $handler->display->display_options['fields']['field_start_time']['field'] = 'field_start_time';
  $handler->display->display_options['fields']['field_start_time']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  /* Field: Content: Day */
  $handler->display->display_options['fields']['field_day']['id'] = 'field_day';
  $handler->display->display_options['fields']['field_day']['table'] = 'field_data_field_day';
  $handler->display->display_options['fields']['field_day']['field'] = 'field_day';
  $handler->display->display_options['fields']['field_day']['relationship'] = 'reverse_field_market_node';
  $handler->display->display_options['fields']['field_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_day']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_day']['element_wrapper_class'] = 'test';
  /* Field: Content: Start Time */
  $handler->display->display_options['fields']['field_start_time_1']['id'] = 'field_start_time_1';
  $handler->display->display_options['fields']['field_start_time_1']['table'] = 'field_data_field_start_time';
  $handler->display->display_options['fields']['field_start_time_1']['field'] = 'field_start_time';
  $handler->display->display_options['fields']['field_start_time_1']['relationship'] = 'reverse_field_market_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'market' => 'market',
  );
  /* Filter criterion: Content: Start and End Dates -  start date (field_start_and_end_dates) */
  $handler->display->display_options['filters']['field_start_and_end_dates_value']['id'] = 'field_start_and_end_dates_value';
  $handler->display->display_options['filters']['field_start_and_end_dates_value']['table'] = 'field_data_field_start_and_end_dates';
  $handler->display->display_options['filters']['field_start_and_end_dates_value']['field'] = 'field_start_and_end_dates_value';
  $handler->display->display_options['filters']['field_start_and_end_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_start_and_end_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Start and End Dates - end date (field_start_and_end_dates:value2) */
  $handler->display->display_options['filters']['field_start_and_end_dates_value2']['id'] = 'field_start_and_end_dates_value2';
  $handler->display->display_options['filters']['field_start_and_end_dates_value2']['table'] = 'field_data_field_start_and_end_dates';
  $handler->display->display_options['filters']['field_start_and_end_dates_value2']['field'] = 'field_start_and_end_dates_value2';
  $handler->display->display_options['filters']['field_start_and_end_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_start_and_end_dates_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_day',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'test';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'markets-list';
  $export['markets_list'] = $view;

  return $export;
}
