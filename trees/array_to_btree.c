#include "tree.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int recursive_insert_array(BTree *node, char **array, int i);

/*convert an array of stings into a binary tree*/
BTree *array_to_btree(char **array){
  BTree *node, *root; 
  int i;

  i = 0; 
  while(array[i]!=NULL){
    if(i==0){/* adding the first element in the root*/
      node = malloc(sizeof(BTree));
      if (node == NULL)
	return NULL;
      node->str = strdup(array[i]);
      node->left = NULL;
      node->right = NULL;
      root = node;
      i++;
    }else
      {
	recursive_insert_array(node, array, i);
	i++;
      }
    
  } 
  return root;
}

/*handling every other node in the tree after adding the root */
int recursive_insert_array(BTree *node, char **array, int i)
{
  int cmp;
  BTree *tree;
  tree = node;
  
  cmp = strcmp(array[i], node->str);
  if (cmp < 0){
    if(tree->left != NULL){
      return recursive_insert_array(tree->left, array, i);
    }
    tree = malloc(sizeof(BTree));
    if (tree == NULL){
      return 0;
    }
    tree->str = strdup(array[i]);
    tree->right = NULL;
    tree->left = NULL;
    node->left = tree;
  }else
   {
     if(tree->right != NULL){
       return recursive_insert_array(tree->right, array, i);
     }
     tree = malloc(sizeof(BTree));
     if (tree == NULL){
       return 0;
     }
     tree->str = strdup(array[i]);
     tree->right = NULL;
     tree->left = NULL;
     node->right = tree;
   }
return 0;
}
