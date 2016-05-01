int whether_prime(int n, int counter);
/*function that returns 1 if a number is a prime number, 0 otherwise using recursion*/
int is_prime_number(int n)
{
  int counter = 2;
  if (n <= 0 || n == 1)
    return 0;
  return whether_prime(n, counter);
}

int whether_prime(int n, int counter)
{
  if(counter == n)
    return 1;
  if(n % counter == 0)
    return 0;
  return (whether_prime(n, counter+1));
}

