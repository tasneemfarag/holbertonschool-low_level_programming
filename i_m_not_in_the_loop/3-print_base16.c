#include "my_functions.h"

/* this function print the numbers of base 16, from 0 to F */

void print_base16(void) {

  int n;
  char c;
  for(n='0'; n<='9'; ++n)
    print_char(n);
  for(c='A'; c<='F'; ++c)
    print_char(c);
}
