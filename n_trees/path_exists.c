#include <string.h>
#include "tree.h"
#include <stdio.h>

int rec_path_exists(NTree *tree, char **path, int i);

/*check if a path is present in a N-ary tree*/
int path_exists(NTree *tree, char **path){
  int i, cmp, inc;
  List *ll;
  
  inc = 0;
  i = 0;
  if (tree == NULL){
    return 0;
  }
  cmp = strcmp(tree->str, path[i]);
  
  if (cmp == 0){
    if (path[i+1] == NULL){
      return 1;
    }
    else{
      ll = tree->children;
      while (ll != NULL){
	tree = ll->node;
	ll = ll->next;
	inc = inc + rec_path_exists(tree, path, i+1);
      }
    } 
  }
  printf("fistOne:%d\n", inc);
  if (inc >= 1){
    return 1;
  }
    return 0;
}

/*recursive search*/
int rec_path_exists(NTree *tree, char **path, int i){
  int cmp, inc;
  List *ll; 
  inc = 0;

  cmp = strcmp(tree->str, path[i]);
  if (cmp == 0){
    if (path[i+1] == NULL){
      return 1;
    }
    else{
      ll = tree->children;
      while (ll != NULL){
        tree = ll->node;
        ll = ll->next;
	inc = inc+ rec_path_exists(tree, path, i+1);
      }
      printf("secondOne:%d\n", inc);
	return inc;
    }
  }
  return 0;
} 
