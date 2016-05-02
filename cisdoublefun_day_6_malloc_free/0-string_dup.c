#include <stdlib.h>
/*function that returns a pointer to a newly allocated space in memory*/
char *string_dup(char *str)
{
  char *dup;
  int count ,i;
  count = 0;
  i = 0;
   
  while(str[count]!='\0')
    {
      count ++;
    }
  dup = malloc((count + 1) * sizeof(char));
  
  if(str == NULL)
    {
      return NULL;
    }
  while(i < count)
    {
      dup[i] = str[i];
      i++;
    }
  dup[count] = '\0';
  return dup;
}
