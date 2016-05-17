#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include "libshell.h"
#include <string.h>

int strings_compare(char *s1, const char *s2);
int print_char(char c);
void print_string(char *s);
int str_ncmp(char *s1, char *s2, int n);
int str_len(char *s);
int find_char(char *s, char c);
char *get_env(char *name, char **env);
char *concat_strings(char *dest, const char *src);
char *string_copy(char *dest, const char *src);

int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env)
{
  pid_t pid;
  char **exec_argv;
  int status; 
  char *read_str;
  int i, j;
  char *tmp;
  char **paths;
  int path_len; 
  int cmd_found;
  char *path_split;
  int src_len;
  char *src;
  src_len = 0;

  
  while(1)
    {
      print_char('$');
      read_str = read_line(0);
      if(read_str == NULL)
	{
	  return 1;
	}
      exec_argv= string_split(read_str, ' ');
      if(exec_argv == NULL)
	{
	  free(read_str);
	  return 1;
	}

      if(strings_compare("exit", exec_argv[0]) == 0 )
	{break;
	}      
      

     else if(strings_compare("env", exec_argv[0]) == 0 )
	{
	  for(i = 0; env[i]!= NULL; i++)
	    {
	      if(i != 0)
		{
		  print_char('\n');
		} 
	      print_string(env[i]);
	    }
	  print_char('\n');
	}

     else
       {
	 if((pid = fork()) == -1)
	   {
	     perror("fork");
	     return (1);
	   }
	 if(pid == 0)
	   {
	     path_split = get_env("PATH", env);   
	     paths = string_split(path_split, ':');
	     if(paths == NULL)
	       {
		 return 1;
	       }
	     cmd_found = -1;
	     for (j = 0; paths[j] != NULL; j++)
	       {
		 path_len = 0;
		 while (paths[j][path_len]!= '\0')
		   {
		     path_len++;
		   }
		 src = exec_argv[0];
		 while(src[src_len] != '\0')
		   {
		     src_len++;
		   }
		 tmp = (char *) malloc(path_len);
		 if(tmp == NULL)
		   {
		     return 1;
		   }
		 string_copy(tmp,paths[j]);
		 concat_strings(tmp, exec_argv[0]);
		 concat_strings(tmp,"/");
		  exec_argv[0] = tmp;
		 if (access(tmp, F_OK) != -1)
		   {
		     execve(tmp, exec_argv, env);
		     free(tmp);
		   }
	       }
	   }
	 else
	   {
	     wait(&status);
	     break;
	     printf("Child process terminated\n");
	   }
       }
      if (cmd_found == -1)
	{
	  print_string("command not found\n");
	}
    }
  
  free(tmp);
  free(read_str);
  free(exec_argv);
  return 0;
}

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

int str_ncmp(char *s1, char *s2, int n)
{
  int i, s3;
  s3 = 0;
  for(i = 0; i<n && s1[i]!='\0'; i++)
    {
      s3 = s1[i] - s2[i];
      if(s3!=0){
	break;
      }
      
    }
  return s3;
}

int str_len(char *s)
{
  int i; 
  i = 0;
  while(s[i]!='\0')
    {
      i++;
    }
  return i;
}

int print_char(char c)
{
  return (write(1, &c, 1));
}
