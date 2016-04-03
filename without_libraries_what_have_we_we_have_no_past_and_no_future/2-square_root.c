/*function that returns the natural square root*/

int GetSquareRoot(int n, int low, int high);

int square_root(int n){
  return GetSquareRoot(n, 0, n);
}

int GetSquareRoot(int n, int low, int high){
  int sqrt;
  if (n==0){
    return 0;
  }
  if (n==1){
    return 1;
  }
  if(n<0){
    return -1;
  }
  if (high - low == 1){
    return -1;
  }
  sqrt = (low + high) / 2;

  if(sqrt <= 0){
    return 1;
  }
  if (sqrt*sqrt > n){
    return GetSquareRoot(n, low, sqrt);
  }
  if (sqrt*sqrt < n){
    return GetSquareRoot(n, sqrt, high);
  }
  return sqrt;
}
