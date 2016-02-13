#include "my_functions.h"
/*function comment*/
void print_combination_2(void)
{
  int i ;
  int j;
  for (i= 0; i <= 9; i++)
    {
      for(j=i+1;j <= 9; j++)
        {
          if (i == 8 && j == 9)
            {
              print_number(i);
              print_number(j);
              return;
            }
          print_number(i);
          print_number(j);
          print_char(',');
          print_char(' ');
	}
    }
}
