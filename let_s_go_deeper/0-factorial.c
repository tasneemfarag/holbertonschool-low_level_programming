/*function that returns the factorial of a given number*/
int factorial(int n) {
  if(n>2147483647){
    return  -1;
  }
  if(n==0){
    return 1;
  }
  if(n==1){
    return 1;

  }else if(n<=0){
    return -1;
  }

  return n* factorial(n-1);
}
