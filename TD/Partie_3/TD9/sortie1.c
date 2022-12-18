#include <stdio.h>
#include <stdlib.h>

int main() {

  int val;

  printf("Entrez valeur entre 5 et 10 : ");
  scanf("%d", &val);
  printf("\n");

  if (val >= 5 && val <= 10){
    exit(0);
  }
  exit(1);

  return 0;
}