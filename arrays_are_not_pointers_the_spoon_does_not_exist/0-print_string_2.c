#include "my_functions.h"
/*print one char*/
void print_string_2(char *str){
  int i;
  for (i = 0; str[i] != '\n'; i++){
    if (str[i]%2==0){
      print_char(str[i]);
    }

  }
  print_char('\n');
}
