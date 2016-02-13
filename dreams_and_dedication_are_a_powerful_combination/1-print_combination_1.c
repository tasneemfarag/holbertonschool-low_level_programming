#include "my_functions.h"

/*function comment*/

void print_combination_1(void){
  int n;
  for (n = 0; n < 10; n++)
    {
      if ( n == 9)
        {
          print_number(n);
          return ;
	}

      print_number(n);
      print_char(',');
      print_char(' ');
    }
}
