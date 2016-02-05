#include "my_functions.h"


/* this function print if the number is positive or not */

void positive_or_not(int n) {


  if (n > 0)
    {
      print_char('P');
    }
  if (n == 0)
    {
      print_char('Z');
    }
  if (n < 0)
    {
      print_char('N');
    }
}
