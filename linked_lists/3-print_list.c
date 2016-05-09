#include <stdlib.h>
#include "list.h"

int print_char(char c);

/*function that prints each element of a list*/
void print_list(List *list)
{
  int j;
  j = 0;

  while(list!=NULL)
    {
      while(list->str[j]!='\0')
	{
	  print_char(list->str[j]);
	  j++;
	}
      j = 0;
      if(list->next == NULL)
	{
	  break;
	}
      print_char(',');
      print_char(' ');
      list = list->next;
    }
  print_char('\n');
}
