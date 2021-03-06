#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int print_char(char c);
int num_length(int number);

/*function transforms an integer to a string */
char *int_to_string(int number)
{
  int i;
  int rem;
  char *str;
  int length = 0;
  int copy = number;

  if (number == INT_MIN)
    {
      number = number + 1;
    }
  if (number < 0)
    {
      print_char('-');
      number = number * -1;
    }
  length = num_length(number);

  str = malloc(sizeof(char) * length);

  if (number == 0)
    {
      str[0] = '0';
    }else
    {
      for (i = 0; i < length; i++)
	{
	  rem = number%10;
	  number = number/10;
	  str[length - (i +1)] = rem + '0';
	}
      if (copy == INT_MIN)
	{
	  str[length - 1] += 1;
	}
    }
  return str;
}
/*calculates the length of the number*/
int num_length(int number)
{
  int i;
  for (i = 0; number > 0; i++)
    {
      number = number/10;
    }
  return i;
}

int print_char(char c)
{
  return (write(1, &c, 1));
}
