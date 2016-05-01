/*recursive function that returns the value of x raised to the power of y*/
int power(int x, int y)
{
  long pow;
  pow = x;
  
  if(pow > 2147483647 || pow < -2147483648)
    {
      return -1;
    }
  if((y < 0) || (x < 0))
    {
      return -1;
    }
  if(y == 0)
    {
      return 1;
    }
 
 
  return (((int)pow) * power(x, y-1));  
}
