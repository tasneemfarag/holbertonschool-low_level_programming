/*function that reverse a string*/
char *rev_string(char *str)
{
  int i = 0, j = 0, count = 0;
  char *t;
  while(str[i++] != '\0')
    {
      count++;
    }
  i = count - 1;
  while(i >= 0)
    {
      t[j] = str[i];
      i--;
      j++;
    }
  
  i = 0;
  while(i < count)
    {
      str[i] = t[i];
      i++;
    }
  
  return str; 
}
