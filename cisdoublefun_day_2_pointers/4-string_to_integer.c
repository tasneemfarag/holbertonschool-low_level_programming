/*returns the first number contained in a string*/
int string_to_integer(char *s)
{
  long num = 0, index = 0;
  int i = 0;
  int sign = 1;
  int num_found = 0;

  while(s[index]!= '\0')
    {
      if(s[index] == '-' && num_found != 1)
	{
	  sign = -1 * sign;
	}
      if((s[index] >= '0') && (s[index] <= '9'))
	{
	  num_found = 1;
	  num =(10 * num) + (s[index]-48);
	  i++;
	  
	}

      if( !((s[index] >= '0') && (s[index] <= '9')) &&  (num_found == 1))
	{
	  break;
	
	}
      index++;
    }

  num = num * sign;

  if(num > 2147483647 || num < -2147483648)
    {
      num = 0;
    }
  return ((int)num);
}
