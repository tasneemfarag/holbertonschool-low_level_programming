/*iterative function that returns the value of x raised to the power of y*/
int power(int x, int y)
{
  int i;
  long result;
  result = 1;
  i = 1;
  if((y < 0) || (x < 0))
    {
      return -1;
    }
  if(y == 0)
    {
      return 1;
    }

  while(y >= i)
    {
      result = result * x;
      if(result > 2147483647 || result < -2147483648)
	{
	  return -1;
	}
      i++;
    }
  return ((int)result);
}
