/*function that concatenates two strings*/
char *string_concat(char *dest, const char *src)
{
  int i = 0, j = 0; 
 
  while(dest[j]!='\0')
    {
      j++;
    }
  
  while(src[i]!='\0')
    {
      dest[j] = src[i];
      j++;
      i++;
    }
  dest[j] = '\0';
  return dest;
}
