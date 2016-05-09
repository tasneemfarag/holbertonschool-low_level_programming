#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int add_node(List **list, char *str);

int main(void)
{
  List *list;
  List *tm ;
  list = NULL;

  if (add_node(&list, "Holberton") == 1)
    {
    free(list);
    return (1);
    }

  if (add_node(&list, "School") == 1)
    {
      free(list);
      return (1);
    }
  tm = list;
  while(tm != NULL)
    {
      printf("%s", tm->str);
      tm = tm->next;
    }

  return (0);
}
