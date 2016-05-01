/*function that changes all lower case letters of a string to upper case*/
char *uppercase_string(char *s)
{
  int i;
  i = 0;
  while(s[i]!='\0')
    {
      if(s[i]>= 97 && s[i] <= 122)
	{
	  s[i] = s[i] - 32;
	}
      i++;
    }
  return s;
}
