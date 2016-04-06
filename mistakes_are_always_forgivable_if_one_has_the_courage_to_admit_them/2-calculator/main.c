#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char c))(int, int);

int main (int argc, char *argv[])
{
  int val;
  int (*op_func) (int, int);
  if (argc != 4) return 1;

  op_func = get_op_func(*argv[2]);
  if (op_func == 0) return 1;
  val = op_func(atoi(argv[1]), atoi(argv[3]));
  printf("%d\n", val);

  return 0;
}
