#include "hashtable.h"
#define NULL 0

void print_num(int n);
int print_char(char c);
int ht_put(HashTable *hashtable, const char *key, const char *value);
HashTable *ht_create(unsigned int size);
int print_hashtable(HashTable *ht);
void print_str(char *str);
char *ht_get(HashTable *hashtable, const char *key);

int main(void) {
  HashTable *ht;
  ht = ht_create(3);

  if (ht == NULL) {
    return 1;
  }
  ht_put(ht, "key 1", "val 1");
  ht_put(ht, "key 2", "val 2");
  ht_put(ht, "key 2", "val 3");
  print_hashtable(ht);
  print_str(ht_get(ht, "key 1"));
  print_char('\n');
  return 0;
}

/* this function just for testing */
int print_hashtable(HashTable *ht) {
  unsigned int i;
  List *listptr;
  for (i = 0; i < ht->size; ++i) {
    print_num(i);
    print_str("\n");

    listptr = ht->array[i];
    print_str("\t--------\n");

    while (listptr != NULL) {
      print_str("\tkey: ");
      print_str(listptr->key);
      print_str("\n\tval: ");
      print_str(listptr->value);
      listptr = listptr->next;
      print_str("\n\t--------\n");
    }
    print_str("\tNULL\n\t--------\n");
  }
  return 0;
}

void print_str(char *str)
{
  int i;
  for(i = 0; str[i] != '\0'; ++i) {
    print_char(str[i]);
  }
}
