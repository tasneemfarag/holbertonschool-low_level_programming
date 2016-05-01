/*iterative function that returns the natural square root of a number*/
int square_root(int n)
{
  int i, root, num;
  num = n/2;
  i = 1;

  if(n == 1)
    {
      return 1;
    }

  if(n < 0)
    {
      return -1;
    }
  while(num > i)
    {
      root = num * num;
      if(root > n)
	{
	  num--;
	}
      if(root == n)
	{
	  return num;
	}
      if(root < n)
	{
	  num = -1;
	}
    }
  return num;
}
