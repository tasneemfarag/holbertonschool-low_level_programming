/*function that compares two strings*/
int strings_compare(char *s1, const char *s2){
  int s3=0;
  int  i;
  for(i=0; s2[i]!='\0'|| s1[i]!='\0'; i++){
    s3 = s1[i] - s2[i];
    if(s3!=0){
      break;
    }

  }
  return s3;
}
