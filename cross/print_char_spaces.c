#include <unistd.h>
int print_char(char c);
/*print_spaces*/
void print_spaces(int num_spaces){
  int x;
  for(x=0; x < num_spaces; x++){
    print_char(' ');
  }
}
/*print_char*/
int print_char(char c)
{
  return (write(1, &c, 1));
}
