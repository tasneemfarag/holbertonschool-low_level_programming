/* function returns the length of a string */
int str_len(char *s){
  int count = 0;
  while (*s != '\0') {
    count++;
    s++;
  }
  return count;
}
