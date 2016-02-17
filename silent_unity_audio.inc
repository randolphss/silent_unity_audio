<?php

// Plugin definition
$plugin = array(
  'title' => t('Silent Unity Audio Node Layout'),
  'category' => t('node_twocol'),
  'icon' => 'silent_unity_audio.png',
  'theme' => 'panels-twocol--node',
  'css' => 'panels_twocol_node.css',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);
