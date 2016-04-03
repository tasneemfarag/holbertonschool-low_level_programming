/*function that copies a string*/
char *string_ncopy(char *dest, const char *src, int n){
  int i=0, j;
  for(j=0; j<n && src[j]!= '\0'; i++, j++){
    dest[i] = src[j];
  }
  for(; i <n; i++){
    dest[i]='\0';}

  return dest;
}
