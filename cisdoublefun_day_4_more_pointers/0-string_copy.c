/*function that copies a string*/
char *string_copy(char *dest, const char *src){
  int i=0, j = 0;
  
  while(src[j]!= '\0'){

    dest[i] = src[j];
    i++;
    j++;
  }

  return dest;
}
