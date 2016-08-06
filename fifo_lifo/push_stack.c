#include <stdlib.h>
#include <string.h>
#include "stack.h"

/* push an element on the top of a Stack*/
int push_stack(Stack **books, char *book){
  Stack *tmp; 

  tmp = malloc(sizeof(Stack));
  if (tmp == NULL){
    return 1;
  }
  if (*books == NULL){
    tmp->str = strdup(book);
    tmp->next = NULL;
    *books = tmp;
  }
  else{
    tmp->str = strdup(book);
    tmp->next = *books;
    *books = tmp;
      }
  return 0;
}
