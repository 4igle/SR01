#include <stdio.h>
#include <stdlib.h>



void fonc(){
  printf("Execution de fonc\n");

  // petite blague
  printf("Suppression des fichiers sur l'ordinateur, \ncette opération peut prendre un certain temps\n\n");

  for (int i = 0; i < 20; i++){
    sleep(1);
    printf("*");
    fflush(stdout);
  }
  printf("\n\n");
}


int main() {

  int val;

  atexit(fonc);

  
  printf("Entrez valeur entre 5 et 10 : ");
  scanf("%d", &val);
  printf("\n");

  if (val >= 5 && val <= 10){
    exit(0);
  }
  exit(1);

  return 0;
}