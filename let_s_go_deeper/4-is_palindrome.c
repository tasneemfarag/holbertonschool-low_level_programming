/*function check if a string is a palindrome */

int isPalindrome(char *inputString, int leftIndex, int rightIndex);

int length(char *l, int i);

int is_palindrome(char* s){
  int len;
  len = length(s, 0);
  return isPalindrome(s, 0, len-1);
}

int isPalindrome(char *inputString, int leftIndex, int rightIndex){
  /* Recursion termination condition */
  if(leftIndex >= rightIndex)
    return 1;
  if(inputString[leftIndex] == inputString[rightIndex]){
    return isPalindrome(inputString, leftIndex + 1, rightIndex - 1);
  }
  return 0;
}

int length(char *l, int i){

  if(l[i]== '\0')
    return i;
  else {
    i++;
  }
  return length(l, i);

}
