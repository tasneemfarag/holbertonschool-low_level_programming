#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define buf_size 512

/*program that copies the content of a file into another file*/
int main(int ac, char *av[]) {

  int r;
  int fd;
  char tmp[BUFSIZ];
  int c;


  if(ac == 1 || ac > 3) { 
    return(1);
  }
  fd = open(av[1], O_RDONLY); 
  r = read(fd, tmp, BUFSIZ);
  close(fd);

  c = open(av[2], O_RDWR|O_CREAT, 0644);
  write(c, tmp, r);


  close(c);
  return(0);
}
