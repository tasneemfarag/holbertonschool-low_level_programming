#include <stdlib.h>
#include "str_struct.h"

/*function that frees a struct String*/
void free_string_struct(struct String *str)
{
  free(str);
}
