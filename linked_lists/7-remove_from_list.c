#include <stdlib.h>
#include "list.h"

/*removes and frees a node from a list at a specific index*/
void remove_from_list(List **list, int index)
{
  if (!list || !(*list)) return -1;

  List *tmp;
  List *prev;
  tmp = *list;
  prev = NULL;

  while (tmp->str != index && tmp->next != NULL)
    {
      prev = tmp;
      tmp = tmp->next;
    }

  if (tmp->str == index)
    {
      if (prev)
        {
	  prev->next = tmp->next;
        }
      else
        {
	  *list = tmp->next;
        }
      free(tmp);
    }

}
