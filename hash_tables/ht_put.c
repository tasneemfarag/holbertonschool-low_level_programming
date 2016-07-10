#include "hashtable.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* #define NULL 0 */

unsigned int hash(const char *key, unsigned int size);
int strings_compare(char *s1, const char *s2);
void node_handler(HashTable *hashtable, List *new_node);

int ht_put(HashTable *hashtable, const char *key, const char *value)
{
  List *new_node;

  new_node = malloc(sizeof(List));
  if (new_node == NULL)
    {
      return 1;
    }
  new_node->key = strdup(key);
  new_node->value = strdup(value);
  new_node->next = NULL;

  node_handler(hashtable, new_node);

  return 0;
}

void node_handler(HashTable *hashtable, List *new_node)
{
  unsigned int index;
  bool dup_flag;
  List *tmp;

  index = hash(new_node->key, hashtable->size);

  tmp = hashtable->array[index];

  /*cheaking if the index is NULL */
  if(hashtable->array[index] == NULL)
    {
      hashtable->array[index] = new_node;
    }
  /*handling collision */
  else if (hashtable->array[index] != NULL)
    {
      tmp = hashtable->array[index];
      dup_flag = false;
      while(tmp != NULL){
        if(strings_compare(tmp->key, new_node->key) == 0){
          dup_flag = true;
          free(tmp->value);
          new_node->value = strdup(tmp->value);
          break;
        }
        tmp = tmp->next;
      }
      if (dup_flag == false){
        new_node->next = hashtable->array[index];
        hashtable->array[index] = new_node;
      }
    }
}
