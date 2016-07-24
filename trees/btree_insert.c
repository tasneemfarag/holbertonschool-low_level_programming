#include "tree.h"
#include <stdlib.h>
#include <string.h>

int print_char(char c);
int recursive_insert(BTree *tree, char *data);

/*insert a node in a binary tree*/
int btree_insert(BTree **tree, char *data)
{
  BTree *node;

  if (*tree == NULL)
    {
      node = malloc(sizeof(BTree));
      if (node == NULL)
	  return 1;
      node->str = strdup(data);
      node->left = NULL;
      node->right = NULL;
      *tree = node;
    }else 
    {
      recursive_insert(*tree, data);
    }
  /* free(node);*/
  return 0;
}

/*handling the inseting into non empty tree */
int recursive_insert(BTree *tree, char *data)
{
  BTree *node;
  int cmp;

  cmp = strcmp(tree->str, data);
  if (cmp <= 0){
    if (tree->right != NULL){
      /* I call the function again
	 to compare the existing node in the tree */
     return recursive_insert(tree->right, data); 
    }
    node = malloc(sizeof(BTree));
    if (node == NULL){
      return 1;
    }
    node->str = strdup(data);
    node->right = NULL;
    node->left = NULL;
    tree->right = node;
  }else
    {
      if(tree->left != NULL){
	/* I call the function again
	   to compare the existing node in the tree */
	return recursive_insert(tree->left, data);
	}
      node = malloc(sizeof(BTree));
      if (node == NULL){
	return 1;
      }
      node->str = strdup(data);
      node->right = NULL;
      node->left = NULL;
      tree->left = node;
    }
  return 0;
}
