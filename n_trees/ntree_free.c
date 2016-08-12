#include <stdlib.h>
#include "tree.h"

/*free an entire N-ary tree*/
void ntree_free(NTree *tree){
  List *ll, *cur_ll;

  if (tree == NULL){
    return;
  }
  cur_ll = tree->children;
  ll = cur_ll;
  while (cur_ll != NULL){
    cur_ll = ll->next;
    ntree_free(ll->node);
    free(ll);
    ll = cur_ll;
  }
  free(tree->str);
  free(tree);
}
