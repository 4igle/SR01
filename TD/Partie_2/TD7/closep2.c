#include <stdio.h>
#include <fcntl.h>

main() {
  int pid,i,status;
  int fd,fd2;

  fd=open("toto.txt",O_RDWR|O_CREAT,0666); // ajouté dans la première case disponible

  int stdout_fd = dup(1);

  printf("avant close\n");
  close(1); // fermer stdout, qui était premier dans la liste des flux
  printf("apres close\n");
  dup (fd);
  printf("apres dup\n");
  close(fd);
  close(1);

  dup(stdout_fd); // dup2 met a la case spécifiée (et pas à la première case libre)

  printf("Le 4eme printf...\n");
}
