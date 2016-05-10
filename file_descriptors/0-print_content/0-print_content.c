#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define buf_size 512 /*buffer size*/
 
int print_char(char c);

int main(int ac, char *av[]) {

  int r;
  int fd;
  char tmp[buf_size];

  if(ac == 1) {
    return 1;
  }
  fd = open(av[1], O_RDONLY);
  r = read(fd, tmp, buf_size);

  if(r > 0) {
    write(1, tmp, r);
    print_char('\n');
  }

  close(fd);
  return(0);
}
