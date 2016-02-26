#include <stdio.h>
#include "my_functions.h"
/*function takes an integer*/
void printf_number(int n) {
  int ncopy, digi, power;
  int singledigi;
  char digicopy;
  if (n < 0)
    { n = n * -1;
      printf("-"); }
  else if (n == 0)
    { printf("0");
      return ; }
  for (ncopy = n , digi = 0; ncopy > 0; digi ++)
    { ncopy = ncopy / 10 ; }
  digicopy = digi ;
  for (power = 1; digi > 1; digi -- )
    {  power = power * 10; }
  for ( ;digicopy > 0; digicopy --)
    { singledigi = n/power;
      printf("%d", singledigi);
      n = n - (singledigi * power);
      power = power / 10;} }
