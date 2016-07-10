#include "hashtable.h"
#include <stdlib.h>

/* free all items in hashtable */
void ht_free(HashTable *hashtable)
{
  unsigned int index;
  List *tmp;

  for (index = 0; index < hashtable->size; index++){
    while(hashtable->array[index] != NULL){
      free(hashtable->array[index]->key);
      free(hashtable->array[index]->value);
      tmp = hashtable->array[index]->next;
      free(hashtable->array[index]);
      hashtable->array[index] = tmp;
    }
  }
  free(hashtable->array);
  free(hashtable);
}
