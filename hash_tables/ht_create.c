#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hashtable.h"

HashTable *ht_create(unsigned int size)
{ HashTable *h_t;

  if (size < 1){
      return NULL; }
 h_t = malloc(sizeof(HashTable));
 if (h_t == NULL){
      return NULL; }
h_t->array = (List**)malloc(size * sizeof(List));
  if (h_t->array == NULL)
    {
      return NULL;
    }
  memset(h_t->array, 0, size * sizeof(List));
  h_t->size = size;

  return h_t;
}
