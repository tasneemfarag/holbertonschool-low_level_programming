#include <stdio.h>
/*program that prints the number of arguments you passed to it*/

int main(int ac, char **av){
  int i;
  for(i = 0; i < ac; i++) {
    av[i]++;

  }
  printf("%d\n", i-1);
  return 0;
