int print_char(char c);

/*function that prints a string*/
void print_string(char *str)
{
  int i;
  while(str[i] != '\0')
    {
      print_char(str[i]);
      i++;
    }
}
