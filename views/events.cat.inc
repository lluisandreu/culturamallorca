$view = new view();
$view->name = 'events';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Events catala';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cerca';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Selecciona icona */
$handler->display->display_options['fields']['field_selecciona_icona']['id'] = 'field_selecciona_icona';
$handler->display->display_options['fields']['field_selecciona_icona']['table'] = 'field_data_field_selecciona_icona';
$handler->display->display_options['fields']['field_selecciona_icona']['field'] = 'field_selecciona_icona';
$handler->display->display_options['fields']['field_selecciona_icona']['label'] = '';
$handler->display->display_options['fields']['field_selecciona_icona']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_selecciona_icona']['type'] = 'taxonomy_image_term_reference_image';
$handler->display->display_options['fields']['field_selecciona_icona']['settings'] = array(
  'relationship' => 'none',
  'ui_name' => '',
  'custom_label' => 0,
  'label' => '',
  'element_label_colon' => 0,
  'exclude' => 0,
  'element_type_enable' => 0,
  'element_type' => '',
  'element_class_enable' => 0,
  'element_class' => '',
  'element_label_type_enable' => 0,
  'element_label_type' => '',
  'element_label_class_enable' => 0,
  'element_label_class' => '',
  'element_wrapper_type_enable' => 0,
  'element_wrapper_type' => '',
  'element_wrapper_class_enable' => 0,
  'element_wrapper_class' => '',
  'element_default_classes' => 1,
  'alter' => array(
    'alter_text' => 0,
    'text' => '',
    'make_link' => 0,
    'path' => '',
    'absolute' => 0,
    'replace_spaces' => 0,
    'external' => 0,
    'path_case' => 'none',
    'link_class' => '',
    'alt' => '',
    'rel' => '',
    'prefix' => '',
    'suffix' => '',
    'target' => '',
    'trim' => 0,
    'max_length' => '',
    'word_boundary' => 1,
    'ellipsis' => 1,
    'more_link' => 0,
    'more_link_text' => '',
    'more_link_path' => '',
    'html' => 0,
    'strip_tags' => 0,
    'preserve_tags' => '',
    'trim_whitespace' => 0,
    'nl2br' => 0,
  ),
  'empty' => '',
  'empty_zero' => 0,
  'hide_empty' => 0,
  'hide_alter_empty' => 1,
  'click_sort_column' => 'tid',
  'type' => 'taxonomy_image_term_reference_image',
  'field_api_classes' => 0,
  'field_name' => 'field_icona',
  'image_style' => '',
  'linked' => 0,
  'text_alt' => 0,
);
/* Field: Content: Foto destacada */
$handler->display->display_options['fields']['field_foto_destacada']['id'] = 'field_foto_destacada';
$handler->display->display_options['fields']['field_foto_destacada']['table'] = 'field_data_field_foto_destacada';
$handler->display->display_options['fields']['field_foto_destacada']['field'] = 'field_foto_destacada';
$handler->display->display_options['fields']['field_foto_destacada']['label'] = '';
$handler->display->display_options['fields']['field_foto_destacada']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_foto_destacada']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_foto_destacada']['settings'] = array(
  'image_style' => 'event_portada',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Tema */
$handler->display->display_options['fields']['field_tema']['id'] = 'field_tema';
$handler->display->display_options['fields']['field_tema']['table'] = 'field_data_field_tema';
$handler->display->display_options['fields']['field_tema']['field'] = 'field_tema';
$handler->display->display_options['fields']['field_tema']['label'] = '';
$handler->display->display_options['fields']['field_tema']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_tema']['alter']['text'] = '[field_tema].';
$handler->display->display_options['fields']['field_tema']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_tema']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: On */
$handler->display->display_options['fields']['field_on_adreca']['id'] = 'field_on_adreca';
$handler->display->display_options['fields']['field_on_adreca']['table'] = 'field_data_field_on_adreca';
$handler->display->display_options['fields']['field_on_adreca']['field'] = 'field_on_adreca';
$handler->display->display_options['fields']['field_on_adreca']['label'] = 'On:';
$handler->display->display_options['fields']['field_on_adreca']['element_label_colon'] = FALSE;
/* Field: Content: Quan */
$handler->display->display_options['fields']['field_quan']['id'] = 'field_quan';
$handler->display->display_options['fields']['field_quan']['table'] = 'field_data_field_quan';
$handler->display->display_options['fields']['field_quan']['field'] = 'field_quan';
$handler->display->display_options['fields']['field_quan']['label'] = 'Quan:';
$handler->display->display_options['fields']['field_quan']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_quan']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Sort criterion: Field: Ordre (field_ordre) */
$handler->display->display_options['sorts']['field_ordre_value']['id'] = 'field_ordre_value';
$handler->display->display_options['sorts']['field_ordre_value']['table'] = 'field_data_field_ordre';
$handler->display->display_options['sorts']['field_ordre_value']['field'] = 'field_ordre_value';
$handler->display->display_options['sorts']['field_ordre_value']['order'] = 'DESC';
/* Sort criterion: Content: Quan -  start date (field_quan) */
$handler->display->display_options['sorts']['field_quan_value']['id'] = 'field_quan_value';
$handler->display->display_options['sorts']['field_quan_value']['table'] = 'field_data_field_quan';
$handler->display->display_options['sorts']['field_quan_value']['field'] = 'field_quan_value';
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
  'event' => 'event',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  'ca' => 'ca',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
$handler->display->display_options['pager']['options']['tags']['next'] = '›';
$handler->display->display_options['pager']['options']['tags']['last'] = '';
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'event' => 'event',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = '';
$handler->display->display_options['filters']['tid']['group'] = 1;
$handler->display->display_options['filters']['tid']['vocabulary'] = 'tema';
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  'ca' => 'ca',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Quan - end date (field_quan:value2) */
$handler->display->display_options['filters']['field_quan_value2']['id'] = 'field_quan_value2';
$handler->display->display_options['filters']['field_quan_value2']['table'] = 'field_data_field_quan';
$handler->display->display_options['filters']['field_quan_value2']['field'] = 'field_quan_value2';
$handler->display->display_options['filters']['field_quan_value2']['operator'] = '>=';
$handler->display->display_options['filters']['field_quan_value2']['group'] = 1;
$handler->display->display_options['filters']['field_quan_value2']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_quan_value2']['expose']['operator_id'] = 'field_quan_value2_op';
$handler->display->display_options['filters']['field_quan_value2']['expose']['label'] = 'Del';
$handler->display->display_options['filters']['field_quan_value2']['expose']['operator'] = 'field_quan_value2_op';
$handler->display->display_options['filters']['field_quan_value2']['expose']['identifier'] = 'end-date';
$handler->display->display_options['filters']['field_quan_value2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['field_quan_value2']['form_type'] = 'date_popup';
/* Filter criterion: Content: Quan -  start date (field_quan) */
$handler->display->display_options['filters']['field_quan_value']['id'] = 'field_quan_value';
$handler->display->display_options['filters']['field_quan_value']['table'] = 'field_data_field_quan';
$handler->display->display_options['filters']['field_quan_value']['field'] = 'field_quan_value';
$handler->display->display_options['filters']['field_quan_value']['operator'] = '<=';
$handler->display->display_options['filters']['field_quan_value']['group'] = 1;
$handler->display->display_options['filters']['field_quan_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_quan_value']['expose']['operator_id'] = 'field_quan_value_op';
$handler->display->display_options['filters']['field_quan_value']['expose']['label'] = 'al';
$handler->display->display_options['filters']['field_quan_value']['expose']['operator'] = 'field_quan_value_op';
$handler->display->display_options['filters']['field_quan_value']['expose']['identifier'] = 'start-date';
$handler->display->display_options['filters']['field_quan_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['field_quan_value']['form_type'] = 'date_popup';
$handler->display->display_options['filters']['field_quan_value']['year_range'] = '-1:+1';
/* Filter criterion: Content: On (field_on_adreca) */
$handler->display->display_options['filters']['field_on_adreca_value']['id'] = 'field_on_adreca_value';
$handler->display->display_options['filters']['field_on_adreca_value']['table'] = 'field_data_field_on_adreca';
$handler->display->display_options['filters']['field_on_adreca_value']['field'] = 'field_on_adreca_value';
$handler->display->display_options['filters']['field_on_adreca_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_on_adreca_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_on_adreca_value']['expose']['operator_id'] = 'field_on_adreca_value_op';
$handler->display->display_options['filters']['field_on_adreca_value']['expose']['label'] = 'On';
$handler->display->display_options['filters']['field_on_adreca_value']['expose']['operator'] = 'field_on_adreca_value_op';
$handler->display->display_options['filters']['field_on_adreca_value']['expose']['identifier'] = 'place';
$handler->display->display_options['filters']['field_on_adreca_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['path'] = 'esdeveniments';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'veure més';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'rss_fields';
$handler->display->display_options['row_options']['title_field'] = 'title';
$handler->display->display_options['row_options']['link_field'] = 'title';
$handler->display->display_options['row_options']['description_field'] = 'body';
$handler->display->display_options['row_options']['creator_field'] = 'field_tema';
$handler->display->display_options['row_options']['date_field'] = 'field_quan';
$handler->display->display_options['row_options']['guid_field_options'] = array(
  'guid_field' => 'title',
  'guid_field_is_permalink' => 0,
);
$handler->display->display_options['path'] = 'rss';
