#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

void fonc_pere();
void fonc_fils();
int pid_fils;
int aff;
char char_pere;
char char_fils;

int main(){
  aff = 1;
  char_fils = 'a';
  char_pere = 'A';
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
      sigaction(SIGUSR1, &act_pere, NULL);
      sleep(2);

      kill(pid_fils, SIGUSR1);
      while(1){
        pause();
      }

  }
}

void fonc_pere(){
  int i = 0;

  while ((i < aff) && (char_pere <= 'Z')) {
    printf("%c", char_pere);
    fflush(stdout);

    char_pere++;
    i++;
  }
  aff++;

  if(char_pere > 'Z'){
      exit(0);
  }

  kill(pid_fils, SIGUSR1);
}

void fonc_fils(){
  int i = 0;
  while ((i < aff) && (char_fils <= 'z')) {
    printf("%c", char_fils);
    fflush(stdout);
    char_fils++;
    i++;
  }
  aff++;

  kill(getppid(), SIGUSR1);

  if(char_pere > 'z'){
      exit(0);
  }

}
