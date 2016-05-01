/*recursive function that returns the factorial of a given number*/
int factorial(int n)
{
  long fact;
  fact = n ;
  if(fact < 0)
    {
      return -1;
    }
  if(fact == 0)
    {
      return 1;
    }
  if(fact > 2147483647 || fact < -2147483648)
    {
      return -1;
      }
  return((int) fact * factorial(n - 1));
}
