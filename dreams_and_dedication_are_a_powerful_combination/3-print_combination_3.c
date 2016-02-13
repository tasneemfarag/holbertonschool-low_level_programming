#include "my_functions.h"
/* function comment */
void print_combination_3(void)
{ int i ;
  int j, k;
  for (i= 0; i <= 9; i++)
    {
      for(j=i+1;j <= 9; j++)
        {
          for (k=j+1; k<=9; k++)
            { if (i == 7 && j == 8 && k == 9)
                {
		  print_number(i);
		  print_number(j);
		  print_number(k);
		  return;  }
	      print_number(i);
	      print_number(j);
	      print_number(k);
	      print_char(',');
	      print_char(' ');
            } }}
}
