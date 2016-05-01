/*function that returns the factorial of a given number*/
int factorial(int n)
{
  int copy;
  long fact = n;
  copy = n-1;
  if(n < 0)
    {
      return -1;
    }
 else if(n == 0 || n == 1)
    {
      return 1;
    }
 else
   {
  while(copy >= 1)
    {
      fact = fact * copy;
      if(fact > 2147483647 || fact < -2147483648)
	{
	  return -1;
	}
      copy--; 
    }
   }
  return ((int)fact);
}
