#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

void handler();
int nombre = 0;

int main(){
  struct sigaction S;
  S.sa_handler = handler;
  sigaction(SIGALRM, &S, NULL);
  alarm(5);
  printf("Tapez un nombre : \n");
  scanf("%d\n", &nombre);

  alarm(0);

  printf("Nombre saisi, traitement du nombre\n");

}

void handler(){
  if (nombre == 0){
    printf("Pas de nombre, sortie\n");
    exit(0);
  }
}
