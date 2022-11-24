#include <stdio.h>
#include <fcntl.h>

main() {
  int pid,i,status;
  int fd,fd2;

  fd=open("toto.txt",O_RDWR|O_CREAT,0666); // ajouté dans la première case disponible
  printf( "avant close\n");
  close(1); // fermer stdout, qui était premier dans la liste des flux
  printf("apres close\n");
  dup (fd); // on duplique fd à la première place dispo
  printf("apres dup\n");
  close(fd); // on ferme fd mais attention, pas sa copie

  close(1); // fermer la copie de fd

  open("/dev/tty",O_RDWR|O_CREAT,0666);


  printf("Le 4eme printf...\n");
}
