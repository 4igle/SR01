#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int pid_fils;

my_system(char *path, char **argv){
  pid_fils = fork();
  if (pid_fils == 0)
    execv(path, argv);
  else
    wait(0);
}

int main() {
    printf("/bin/ls -la :\n\n");
    char *arguments1[]={"ls","-la", NULL};
    my_system("/bin/ls", arguments1);


    printf("\n\n\n\n");


    printf("/bin/ls *.c :\n\n");
    char *arguments2[]={"bash", "-c", "/bin/ls *.c", NULL};
    my_system("/bin/bash", arguments2);

  return 0;
}