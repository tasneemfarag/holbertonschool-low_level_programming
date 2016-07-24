#include "tree.h"
#include <stdlib.h>
#include <string.h>

int btree_depth(BTree *tree);

int btree_depth_recusive(BTree *tree)
{
  int d_left, d_right;
  d_left = 1;
  d_right = 1;
  
  if (tree == NULL) {
    return 0;
  }
  d_left = d_left+btree_depth_recusive(tree->left);
  d_right = d_right+btree_depth_recusive(tree->right);
  if(d_left > d_right){
    return d_left;
  }else{
    return d_right;
  }
}

int btree_depth(BTree *tree)
{
  if (tree ==NULL){
    return -1;
  }
  return btree_depth_recusive(tree)-1;
}

