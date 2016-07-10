#include "hashtable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strings_compare(char *s1, const char *s2);
unsigned int hash(const char *key, unsigned int size);

/*retrieve the index corresponding to the key */
char *ht_get(HashTable *hashtable, const char *key)
{ int index;
  char *key_copy;
  List *tmp;
  index = hash(key, hashtable->size);
  tmp = hashtable->array[index];
  key_copy = strdup(key);
  while (tmp != NULL){
    if (strings_compare(tmp->key, key_copy) == 0){
      break;}
    tmp = tmp->next;}
  if(tmp == NULL){
    return NULL;
  }
  return tmp->value;
}
