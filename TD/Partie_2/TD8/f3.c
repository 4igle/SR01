#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  pid_t pid_fils;
  int status;

  pid_fils = fork();

  if (pid_fils == 0){
    // sleep(1);
    printf("Ici le fils, mon pid est %ld, le pid de mon père est %ld\n", getpid(), getppid());
    exit(45);
  }
  else{
    // sleep(1);
    wait(&status);
    printf("Ici le parent, mon pid est %ld, le pid de mon fils est %ld\n", getpid(), pid_fils);
    printf("Exit status fils : %d\n", WEXITSTATUS(status));
  }
  return 0;
}