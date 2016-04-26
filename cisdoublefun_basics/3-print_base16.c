int print_char(char c);

/*function that prints all the numbers of base 16*/
void print_base16(void)
{
  int num = 0;
  char ch = 'A';
  while(num <= 9)
    {
      print_char(num + '0');
      num++;
    }
  
  while(ch <= 'F')
    {
      print_char(ch);
      ch++;
    }
}
