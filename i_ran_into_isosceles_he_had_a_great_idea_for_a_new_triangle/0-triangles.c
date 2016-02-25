#include <stdio.h>
/* print triangles */
void triangles_in_the_term(int h, int n) {
  int row, c, temp, times;
  for(times = 1; times <= n ; times++){
    if((h<=0) ||(n<=0)){
      break ;}
    temp = h;
    for ( row = 1 ; row <= h ; row++ )
      {
	for ( c = 1 ; c < temp ; c++ )
	  {printf(" ");}

	temp--;

	for ( c = 1 ; c <= 2*row - 1 ; c++ )
	  { printf("*");}

	printf("\n");
      }
  }
}
