#include "my_functions.h"
/*print the second half of the string */
void print_string_half(char *str){
  int i= 0;
  int j;
  while (str[i]!='\0'){
    i++;
  }
  if(i%2==0){
    j = i/2;
  }

  else if(i%2!=0){
    j = (i - 1)/2+1;
  }

  for(;j<i; j++){
    print_char(str[j]);
  }
}
