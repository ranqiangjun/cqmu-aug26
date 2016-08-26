<?php

/**
 * Implements hook_drush_command().
 */
function cqmu_drush_command() {

  $items['cqmu'] = array(
    'description' => '大重医' 
  );

  return $items;
}

function drush_cqmu()
{
  $nids = array();
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'article')
    ->addMetaData('account', user_load(1)); // Run the query as user 1.

  $result = $query->execute();


  if (isset($result['node'])) {
    $nids = array_keys($result['node']);
    // dpm($nids);
  }

  print_r($nids);


  node_delete_multiple($nids);

  drush_log("所有节点删除成功", "ok");
}