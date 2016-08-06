#include <stdlib.h>
#include "queue.h"

/*dequeue an element from a queue*/
char *pop_queue(Queue **books){
  Queue *tmp2;
  
  if (*books == NULL){
    return NULL;
  }
  else{
    tmp2 = *books;
    if(tmp2->next == NULL){
      tmp2 = NULL;
    }
    else{
      *books = tmp2->next;
      /*tmp2 = NULL;*/
    }
  
  }

  return tmp2->str;
}
