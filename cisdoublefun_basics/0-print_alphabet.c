int print_char(char c);
/*function that prints the alphabet, in lowercase*/
void print_alphabet(void) 
{
  char ch = 'a'; 
  while(ch<='z'){

      print_char(ch);
      ch++;
    }
}
