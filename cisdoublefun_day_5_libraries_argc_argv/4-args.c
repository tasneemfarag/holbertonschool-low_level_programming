#include <stdio.h>
/*prints all arguments it receives, starting from the last one*/
int main(int argc, char *argv[])
{
  int i, count;
  i = 0;
  count = argc - 1;
  while(i < argc)
    {
      printf("%s\n", argv[count]);
	     i++;
	     count--;
    }
	return 0;
}
