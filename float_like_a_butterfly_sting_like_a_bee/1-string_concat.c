#include <stdlib.h>

/*function that concatenates two strings*/
char *string_concat(char *s1, char *s2){
  char *s5;
  int len1, len2, i;
  len1 = 1;
  len2 = 1; 
  while(s1[len1-1]!='\0'){
    len1++;}

  while(s2[len2-1]!='\0'){
    len2++;}

  s5 = malloc(sizeof(*s1) * ((len1-1) + len2));
  
  if ((s1 == NULL)||(s2 == NULL)){
    return NULL;
  }

  for(i=0 ; i < ((len1 - 1) + len2) ; i++){
    if(i < (len1 - 1)){
      s5[i] = s1[i];
    }else{
      s5[i] = s2[i-(len1-1)];}
  }	
  return s5;
}
