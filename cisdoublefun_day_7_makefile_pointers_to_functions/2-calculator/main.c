#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char c))(int, int);

int main (int ac, char *av[])
{ 
  int val;
  int (*op_func) (int, int);

  if (ac !=4 )
    {
      return 1;
    }
  op_func = get_op_func(*av[2]);

 
  if (op_func == 0)
    {
      return 1;
    }
  val = op_func(atoi(av[1]), atoi(av[3]));
  printf("%d\n", val);

  return 0;
}
