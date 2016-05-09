#include <stdlib.h>
#include "list.h"

char *string_copy(char *dest, const char *src);

/*function that allocates a new node and links it to the to a list*/
int add_node(List **list, char *content)
{
  List *node; 
  char *dest;

  node = malloc(sizeof(List));
  if (node==NULL)
    return 1;
  dest = malloc(sizeof(content));
  string_copy(dest,content);

  if (dest==NULL)
    return 1;

  node->str = dest;
  node->next = *list;
  *list = node;
  return 0; 
}

/* function that copies a string*/
char *string_copy(char *dest, const char *src){
  int i=0, j;
  for(j=0; src[j]!='\0'; i++, j++){
    dest[i] = src[j];
  }
  dest[i] = '\0';
  return dest;
}
