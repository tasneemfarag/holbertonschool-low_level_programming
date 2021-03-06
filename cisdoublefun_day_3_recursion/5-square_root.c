int square_root_recursion(int n, int num);
/*returns the natural square root of a number using recursion */
int square_root(int n)
{
  int num;
  num = n/2;
  if(n == 1)
    {
      return 1;
    }

  if(n < 0)
    {
      return -1;
    }

 return square_root_recursion(n, num);
}

int square_root_recursion(int n, int num)
{ 
  int root;
  root = num * num;
 
  if(num == 1)
    {
      return -1;
    }
  
  
  
  if(root > n)
    {
      num--;
      return square_root_recursion(n, num);
    }
  if(root == n)
    {
      return num;
    }
  if(root < n)
    {
      return -1;
    }

  return 0;
}
