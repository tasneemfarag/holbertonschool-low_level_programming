#include<stdio.h>
/*print numbers to 98*/
void print_to_98(int n)
{int i;
  if ( n < 98 )
    {for(i = n; i <= 98; i++)
        { if (i == 98)
            { printf("%d",i);}
          else
            { printf("%d", i);
              printf("%c",','); }}
      printf("\n"); }
  else
    { for (i = n; i >= 98; i--)
        {   if (i == 98)
            {  printf("%d",i);}
          else
            { printf("%d", i);
              printf("%c",','); }
        }
      printf("\n");
    }
}
