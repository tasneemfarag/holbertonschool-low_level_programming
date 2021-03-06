/* function that concatenates two strings*/
char *string_nconcat(char *dest, const char *src, int n)
{
  int i = 0, j = 0;

  while(dest[j]!='\0')
    {
      j++;
    }

  while(src[i]!='\0' && i < n)
    {
      dest[j] = src[i];
      j++;
      i++;
    }
  dest[j] = '\0';
  return dest;
}
