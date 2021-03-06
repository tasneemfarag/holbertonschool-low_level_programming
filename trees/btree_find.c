#include "tree.h"
#include "stdlib.h"
#include "string.h"

/*look for an element in a binary tree */
BTree *btree_find(BTree *tree, char *str)
{ 
  int cmp;
  
  if (tree == NULL){
    return NULL;
  }
  cmp = strcmp(str, tree->str);
  if (cmp > 0){
    return btree_find(tree->right, str);
  }
  else if (cmp < 0){
    return btree_find(tree->left, str);
  }
  else{
    return tree;
  }

}
