#include<stdio.h>
/*print combination*/
void print_combination_2(void){
  int i ;
  int j;
  for (i= 0; i <= 9; i++)
    {
      for(j=i+1;j <= 9; j++)
        {
          if (i == 8 && j == 9)
            {
              printf("%d",i);
              printf("%d",j);
              return;
            }
          printf("%d",i);
          printf("%d",j);
          printf("%c",',');
          printf("%c",' ');
        }
    }
}
