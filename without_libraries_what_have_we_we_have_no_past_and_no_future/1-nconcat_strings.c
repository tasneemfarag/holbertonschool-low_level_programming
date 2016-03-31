/*concatenates two strings*/
char *nconcat_strings(char *dest, const char *src, int n){
  int i=0, j;
  while(dest[i]!='\0'){
    i++;
  }
  for(j=0; j<n && src[j]!= '\0'; i++, j++){
    dest[i] = src[j];

  }

  return dest;
}
