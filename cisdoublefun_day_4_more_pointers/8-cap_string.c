/*function that capitalizes all words of a string*/
char *cap_string(char *s)
{
  int i;
  i = 0;
  while(s[i]!='\0'){

    if(s[i]==' ' ||  s[i]=='\n' || s[i]=='\t'){
     
      if(s[i+1] >= 97 && s[i+1] <= 122)
	s[i+1] = s[i+1] - 32;

    }
    i++;

  }

  return(s);
}
