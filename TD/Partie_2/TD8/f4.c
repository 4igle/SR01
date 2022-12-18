#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  pid_t pid_fils1, pid_fils2;
  int status;

  pid_fils1 = fork();

  if (pid_fils1 == 0){
    // sleep(1);
    printf("Ici le fils 1, mon pid est %ld, le pid de mon père est %ld\n", getpid(), getppid());
    exit(111);
  }
  else{

    pid_fils2 = fork();
    if (pid_fils2 == 0){
      // sleep(1);
      printf("Ici le fils 2, mon pid est %ld, le pid de mon père est %ld\n", getpid(), getppid());
      exit(222);
    }
    else{
      // sleep(1);
      printf("Ici le père, mon pid est %ld, les pid de mes fils sont %ld et %ld\n", getpid(), pid_fils1, pid_fils2);
      printf("Ici le père, j'attends la fin de mes fils\n");


      // L'ordre dans lequel on attend la fin des fils est interchangeable
      printf("\nIci le père, j'attends la fin de mon premier fils.\n");
      waitpid(pid_fils1, &status, 0);
      printf("Mon premier fils viens de se terminer et m'a renvoyé %d\n\n", WEXITSTATUS(status));

      printf("\nIci le père, j'attends la fin de mon deuxième fils.\n");
      waitpid(pid_fils2, &status, 0);
      printf("Mon deuxième fils viens de se terminer et m'a renvoyé %d\n\n", WEXITSTATUS(status));

    }

  }

  return 0;
}