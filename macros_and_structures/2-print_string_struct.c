#include "str_struct.h"
void print_number(int n);
int print_char(char c);


/*function that prints the content of a struct String*/
void print_string_struct(struct String *str)
{
  
  int i;
  i = 0;

    while(str->str[i]!='\0')
    {
      print_char(str->str[i]);
      i++;
    }
  print_char(',');
  print_char(' ');
  print_number(str->length);
  print_char('\n');
}
