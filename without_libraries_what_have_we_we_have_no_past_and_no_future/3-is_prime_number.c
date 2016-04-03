/*function that returns 1 if a number is a prime number,0 otherwise*/
int prime(int x, int y);

int is_prime_number(int n){

  return prime(n, n/2);
}

/*if x is prime return 1 else return 0 */
int prime(int x, int y){
  if(x==0){
    return 0;
  }
  if(x<0){
    x = x * -1;
  }
  if(x==1){
    return 0;
  } else if(y==1){
    return 1;
  }else {
    if (x%y == 0){

      return 0;
    }else{
      return prime( x, y-1);
    }
  }


}
