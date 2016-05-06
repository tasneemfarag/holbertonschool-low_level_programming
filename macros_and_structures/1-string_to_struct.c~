#include <stdlib.h>
#include "str_struct.h"


/*function that stores a string and its length in a newly allocated structure, 
  and return the address of this structure*/
struct String *string_to_struct(char *str)
{
  int i;
  struct String *word;
  i = 0;

  while (str[i]!='\0')
    {
      i++;
    }
  word = malloc(sizeof(struct String));
  
  if (word == NULL)
    return NULL;

  word->str = str;
  word->length = i; 
 
  return word;
}
