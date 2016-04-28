/*function that returns the length of a string*/
int str_len(char *s)
{
  int i;
  while(s[i]!= '\0')
    {
      i++;
    }
  return i;
}
