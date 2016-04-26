int print_char(char c);

/*check if the number positive or negative*/
void positive_or_not(int n)
{
  if(n > 0)
    {
      print_char('P');
    }
  else if(n < 0)
    {
      print_char('N');
    }
  else
    {
      print_char('Z');
    }
}
