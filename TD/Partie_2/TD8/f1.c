#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  pid_t pid_fils;
  int i;

  pid_fils = fork();

  if (pid_fils == 0){
    // sleep(1);
    printf("Ici le fils, mon pid est %ld, le pid de mon père est %ld\n", getpid(), getppid());
  }
  else{
    // sleep(1);
    // wait(0);
    printf("Ici le parent, mon pid est %ld, le pid de mon fils est %ld\n", getpid(), pid_fils);

  }

  return 0;
}