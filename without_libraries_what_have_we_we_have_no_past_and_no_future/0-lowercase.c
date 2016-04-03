/* print lowercase */

char lowercase(char ch1){
  char ch2;

  if(ch1 >= 'A' && ch1 <= 'Z'){
    ch2 = ('a' + ch1 - 'A');
    return ch2;
  }
  else{
    ch2 = ch1;
    return ch2;
  }
}
