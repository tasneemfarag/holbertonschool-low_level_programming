#include<stdio.h>
/*fizzbuzz */
int main(void){
  int n;
  for (n =1;n <= 100; n++)
    { if ((n % 3 == 0) && (n % 5 == 0)){
	printf("FizzBuzz");
	printf("%c",' ');}
      else if (n % 3 == 0)
        { printf("Fizz");
          printf("%c",' '); }
      else if (n % 5 == 0)
        {if(n == 100){printf("Buzz");
            return(0);}
          printf("Buzz");
          printf("%c",' '); }
      if ((n % 3 != 0) && (n % 5 != 0) && (n != 100))
        {  printf("%d", n);
          printf("%c",' ');}
      /* if (n == 100){                                                                                                                                                                                     
         printf("Buzz");}*/
    }
  return(0);
}
