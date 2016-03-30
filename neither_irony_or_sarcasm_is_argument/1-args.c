#include <stdio.h>

/*program that prints all arguments it receives*/
int main(int ac, char **av){
  int i;
  for ( i = 0; i < ac; ++i ) {
    printf( "%s\n", av[i]);
  }

  return 0;
}
