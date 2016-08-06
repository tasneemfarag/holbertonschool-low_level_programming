#include <stdlib.h>
#include <string.h>
#include "queue.h"

/*enqueue an element in a list*/
int push_queue(Queue **books, char *book){
  Queue *tmp, *tmp2;
  
  tmp = malloc(sizeof(Queue));
  if (tmp == NULL){
    return 1;
  }
  if (*books == NULL){
    tmp->str = strdup(book);
    tmp->next = NULL;
    *books = tmp;
  }
  else{
    tmp2 = *books;
    while(tmp2->next != NULL){
      tmp2 = tmp2->next;
    }
    tmp->str = strdup(book);
    tmp->next = NULL;
    tmp2->next = tmp;
  }
  return 0;
}
