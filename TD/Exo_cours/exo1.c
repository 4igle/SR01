#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

void fonc_pere();
void fonc_fils();
int pid_fils;

int main(){

  struct sigaction act_pere, act_fils;
  pid_fils = fork();

  switch (pid_fils) {
    case -1: // erreur
      exit(0);

    case 0: // fils
      act_fils.sa_handler =  fonc_fils;
      sigaction(SIGUSR1, &act_fils, NULL);
      while(1){
        pause();
      }
      break;

    default: // pere
      act_pere.sa_handler = fonc_pere;
      sigaction(SIGALRM, &act_pere, NULL);
      alarm(5);
      while(1){
        sleep(1);
        printf("-");
        fflush(stdout);
      }

  }
}

void fonc_pere(){
  kill(pid_fils, SIGUSR1);
  alarm(5);
}

void fonc_fils(){
  int t = 10 + random() % 31;
  printf("Température : %d\n", t);
}
