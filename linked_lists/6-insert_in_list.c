#include <stdlib.h>
#include "list.h"
int list_size(List *list);
int add_node_end(List **list, char *content);
int add_node_beg(List **list, char *content);
char *string_copy(char *dest, const char *src);
int list_size(List *list);

/*creates a node and then inserts it in a list at a specific index*/
int insert_in_list(List **list, char *content, int index)
{
  List *node;
  char *dest; 
  List *tm; 
  List *tmafter;
  int i, len;
  i = 0;


  if (index < 0)
    {
      return 0;
    }
  node = malloc(sizeof(List));
  if (node==NULL)
    return 1;
  dest = malloc(sizeof(content));
  string_copy(dest,content);

  if (dest==NULL)
    return 1;

  /* len = get length of list */
  len =  list_size(list);
  /* If index == 0, then call function addtobegginning …. return */
  if (index == 0)
    {
      add_node_beg(node, content);
      return 0;
    }
 
  /* If index == len, then call function addtoend … return */
  if (index == len)
    {
      add_node_end(node, content);
      return 0;
    }

  tm = list;
  while(tm != NULL && tm->next != NULL)
    {
      if(i==(index-1)) 
	{
	  tmafter = tm->next;
	  tm->next = node;
	  node->next = tmafter;
	  node->str = content;
	  break;
	}
      i++;
      tm = tm->next; 
    }

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

/*function that allocates a new node and links it to the to a list*/
int add_node_beg(List **list, char *content)
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

/*function that allocates a new node and
  link it to the to end of a list*/
int add_node_end(List **list, char *content)
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

/*function that returns the number of node in a list*/
int list_size(List *list)
{
  int length;
  length = 0;

  while(list!=NULL)
    {
      length++;
      list = list->next;
    }
  return length;
}
