/* function that copies a string*/
char *string_copy(char *dest, const char *src){
  int i=0, j;
  for(j=0; src[j]!='\0'; i++, j++){
    dest[i] = src[j];
  }
  return dest;
}
