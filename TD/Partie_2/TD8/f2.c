#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  pid_t pid_fils1, pid_fils2;
  int i;

  pid_fils1 = fork();

  if (pid_fils1 == 0){
    // sleep(1);
    printf("Ici le fils 1, mon pid est %ld, le pid de mon père est %ld\n", getpid(), getppid());
  }
  else{

    wait(0);

    pid_fils2 = fork();
    if (pid_fils2 == 0){
      // sleep(1);
      printf("Ici le fils 2, mon pid est %ld, le pid de mon père est %ld\n", getpid(), getppid());
    }
    else{
      // sleep(1);
      wait(0);
      printf("Ici le parent, mon pid est %ld, les pid de mes fils sont %ld et %ld\n", getpid(), pid_fils1, pid_fils2);

    }

  }

  return 0;
}