int print_char(char c);

/*function returning O if a number is odd otherwise 'E'*/
char odd(int n)
{
  if(n%2 & 1)
    {
      /* print_char('O');*/
      return 'O';
    }
  else
    {
      return 'E';
    }

}
