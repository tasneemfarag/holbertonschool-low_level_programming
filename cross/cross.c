#include "my_function.h"

int read_int(char *avTwo_array);
void odd_cross(int left_space, int mid_space, int right_space, int from_mid);
void even_cross(int left_space, int mid_space, int right_space, int from_mid, int i, int n);
int get_from_mid(int i, int n, int from_mid);
/*main for cross */
int main(int ac, char **av){
  int i, n, left_space, mid_space, right_space, from_mid;
  n = read_int(av[1]);
  if(ac == 2 && n != 0){
    left_space = 0;
    mid_space = n - 2;
    right_space = 0;
    from_mid = -1;
    for(i=0; i < n; i++){
      from_mid = get_from_mid(i,n,from_mid);
      if (n%2 != 0){
        odd_cross(left_space,mid_space,right_space,from_mid);
      }else{
        even_cross(left_space,mid_space,right_space,from_mid,i,n); }
      if(from_mid < 0){
        left_space++;
        mid_space = mid_space - 2;
        right_space++;
      }else if (from_mid > 0){
        left_space--;
        mid_space = mid_space + 2;
        right_space--;
      }else{
        if(n%2 != 0 || ((float)n/(float)i) <= 2){
          left_space--;
          mid_space = mid_space + 2;
          right_space--;
        } } } }
  return 0; }
/*get_from_mid*/
int get_from_mid(int i, int n, int from_mid){
  if((i+1) < (float)n/2){
    from_mid = -1;
  }else if(i > (float)n/2){
    from_mid = 1;
  }else{
    from_mid = 0; }
  return from_mid;
}
/*read_int*/
int read_int(char *avTwo_array){
  int n, i;

  i = 1;
  n = avTwo_array[0] - 48;
  while(avTwo_array[i] != '\0'){
    n = n * 10;
    n = n + (avTwo_array[i] - 48);
    i++;
  }
  return n;
}
/*odd_cross*/
void odd_cross(int left_space, int mid_space, int right_space, int from_mid){
  print_spaces(left_space);
  if(from_mid < 0){
    print_char('\\');
  }else if(from_mid > 0){
    print_char('/'); }

  print_spaces(mid_space);

  if(mid_space <= 0 && from_mid == 0){
    print_char('X'); }

  if(from_mid < 0){
    print_char('/');
  }else if(from_mid > 0){
    print_char('\\'); }

  print_spaces(right_space);
  print_char('\n');
}
/*even_cross*/
void even_cross(int left_space, int mid_space, int right_space, int from_mid, int i, int n){
  print_spaces(left_space);
  if(from_mid < 0){
    print_char('\\');
  }else if(from_mid > 0){
    print_char('/');
  }else{
    if(((float)n/(float)i) > 2){
      print_char('\\');
      print_char('/');
    }else{
      print_char('/');
      print_char('\\');
    }
  }

  print_spaces(mid_space);

  if(from_mid < 0){
    print_char('/');
  }else if(from_mid > 0){
    print_char('\\'); }

  print_spaces(right_space);

  print_char('\n');
}





            










