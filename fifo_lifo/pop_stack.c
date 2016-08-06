#include <string.h>
#include <stdlib.h>
#include "stack.h"

/*pop an element from a Stack*/
char *pop_stack(Stack **books){
  Stack *tmp;
  
  if (*books == NULL){
    return NULL;
  }
  tmp = *books;
  *books = tmp->next;
  return tmp->str;
}
