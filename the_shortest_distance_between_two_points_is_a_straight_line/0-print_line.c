#include "my_functions.h"
/*print '_' */

void print_line(int n){
  int i;

  for(i=0; i<n; i++){
    if(n<=0){
      print_char('\n');
    }
    print_char('_');
  }
  print_char('\n');

}
