#include "tree.h"
#include "stdio.h"

void printLevelOrder(BTree *root, int h);
void printGivenLevel(BTree *root, int level);

BTree *btree_find(BTree *tree, char *str);
int btree_depth(BTree *tree);
void btree_free(BTree *tree);
BTree *array_to_btree(char **array);
int btree_insert(BTree **tree, char *data);
void print_preorder(BTree *tree);
int test_insert();

int main() {
  BTree *tree;
  BTree *find;
  int depth;
  char *array[11];
  
  array[0] = "5";
  array[1] = "1";
  array[2] = "6";
  array[3] = "9";
  array[4] = "0";
  array[5] = "4";
  array[6] = "3";
  array[7] = "8";
  array[8] = "2";
  array[9] = "7";
  array[10] = "4";
  
  tree = array_to_btree(array);
  /*print_preorder(tree);*/
  printLevelOrder(tree,5);
  depth  = btree_depth(tree);
  printf("d_array:%d\n", depth);
  find = btree_find(tree, "A");
  /*print_preorder(find);*/
  if(find == NULL){
    printf("Not found.\n");
  }else{
    printLevelOrder(find,5);
  }
  btree_free(tree);
  test_insert();
  return 0;
}

int test_insert() {
  BTree *tree;
  BTree *find;
  int depth; 
  tree = NULL;
  
  printf("The numbers should be in ascending order.\n");
  
  btree_insert(&tree, "5");
  btree_insert(&tree, "1");
  btree_insert(&tree, "6");
  btree_insert(&tree, "9");
  btree_insert(&tree, "0");
  btree_insert(&tree, "4");
  btree_insert(&tree, "3");
  btree_insert(&tree, "8");
  btree_insert(&tree, "2");
  btree_insert(&tree, "7");
  btree_insert(&tree, "4");

  /*print_preorder(tree);*/
  printLevelOrder(tree,5);
  depth  = btree_depth(tree);
  printf("d_single:%d\n", depth);
  find = btree_find(tree, "Z");
  /*print_preorder(find);*/
  if(find == NULL){
    printf("Not found.\n");
  }else{
    printLevelOrder(find,5);
  }
  btree_free(tree);
  return 0;
}

void print_preorder(BTree *tree) {
  if (tree == NULL) return;
  printf("%s\n", tree->str);
  print_preorder(tree->left);
  print_preorder(tree->right);
}

/* Function to line by line print level order traversal a tree*/
void printLevelOrder(BTree *root, int h)
{
  int i;
  for (i=1; i<=h; i++)
    {
      printGivenLevel(root, i);
      printf("\n");
    }
}
 
/* Print nodes at a given level */
void printGivenLevel(BTree *root, int level)
{
  if (root == NULL)
    return;
  if (level == 1)
    printf("%s ", root->str);
  else if (level > 1)
    {
      printGivenLevel(root->left, level-1);
      printGivenLevel(root->right, level-1);
    }
}
