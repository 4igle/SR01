#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

my_system(char *path, char **argv){
  execv(path, argv);
}

int main() {

  printf("/bin/ls -la :\n\n");

  char *arguments1[]={"ls","-la", NULL};
  my_system("/bin/ls", arguments1);

  printf("\n\n\n\n");

  printf("/bin/ls *.c :\n\n");
  char *arguments2[]={"ls","*.c", NULL};
  my_system("/bin/ls", arguments2);

  return 0;
}