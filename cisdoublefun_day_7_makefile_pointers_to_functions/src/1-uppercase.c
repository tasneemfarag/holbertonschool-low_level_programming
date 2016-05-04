/*print uppercase */

char uppercase(char ch1){
  char ch2;

  if(ch1 >= 'a' && ch1 <= 'z'){
    ch2 = ('A' + ch1 - 'a');
    return ch2;
  }
  else{
    ch2 = ch1;
    return ch2;
  }
}
