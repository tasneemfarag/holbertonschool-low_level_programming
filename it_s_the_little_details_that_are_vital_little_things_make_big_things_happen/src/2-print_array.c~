#include "my_functions.h"
void print_number(int n);
/*print elements*/
void print_array(int *a, int n){
  int i;
  for (i=0;i < n; i++){
    if (i==0){
      print_number(a[i]);}
    else if(i!=0){

      print_char(',');
      print_char(' ');
      print_number(a[i]);
    }
  }print_char('\n');
}

void print_number(int n) {
  int ncopy, digi,power, singledigi;
  char chardigi, digicopy;
  if (n < 0)
    { n = n * -1;
      print_char('-'); }
  else if (n == 0)
    { print_char('0');
      return ; }
  for (ncopy = n , digi = 0; ncopy > 0; digi ++)
    { ncopy = ncopy / 10 ; }
  digicopy = digi ;
  for (power = 1; digi > 1; digi -- )
    {  power = power * 10; }
  for ( ;digicopy > 0; digicopy --)
    { singledigi = n/power;
      chardigi = singledigi + '0';
      print_char(chardigi);
      n = n - (singledigi * power);
      power = power / 10;} }
