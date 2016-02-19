#include "my_functions.h"
/*print last digit*/
void print_last_digit(int n){
  int x;
  char a;
  if ( n < 0)
    {
      n = n * -1;
    }
  x = n % 10;
  a = x + '0';
  print_char(a);
}
