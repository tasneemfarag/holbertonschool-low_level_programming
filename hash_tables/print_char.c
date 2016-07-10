#include <unistd.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_num(int n)
{
  if (n >= 10) {
    print_num(n / 10);
  }
  print_char(n % 10 + 48);
}

/*function that compares two strings*/
int strings_compare(char *s1, const char *s2)
{
  int s3 = 0, i = 0;

  while( s2[i]!='\0'|| s1[i]!='\0'){
    s3 = s1[i] - s2[i];
    i++;
    if(s3!=0){
      break;
    }

  }
  return s3;
}
