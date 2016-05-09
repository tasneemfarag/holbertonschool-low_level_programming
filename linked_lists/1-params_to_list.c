#include <stdlib.h>
#include <stdio.h>
#include "list.h"

void copy_str(char *src, char *dest);
int add_node(List **list, char *str);

/*creates a new list from the command line arguments*/
List *params_to_list(int ac, char **av) {
  int i = 0;
  List *list = malloc(sizeof(void *) * (ac + 1));
  if (list == NULL) return NULL;
  while (i < ac) {
    if (add_node(&list, av[i])) return NULL;
    i++;
  }
  return list;
}

int add_node(List **list, char *content)
{
  List *node;
  char *dest;
  List *tm;

  node = malloc(sizeof(List));
  if (node==NULL)
    return 1;
  dest = malloc(sizeof(content));
  string_copy(dest,content);

  if (dest==NULL)
    return 1;

  tm = *list;
  while(tm != NULL && tm->next != NULL)
    {
      tm = tm->next;
    }

  if(tm!=NULL)
    {
      node->str = dest;
      tm->next = node;
      node->next = NULL;
    }
  else
    {
      node->str = dest;
      node->next = *list;
      *list = node;
    }

  return 0;
}

