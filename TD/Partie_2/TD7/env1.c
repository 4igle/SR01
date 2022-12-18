#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char variable[100], exe[100];
  printf("Nom de la variable : ");
  scanf("%s", variable);

  if (getenv(variable) != NULL){
    printf("getenv(%s)=%s\n", variable, getenv(variable));

    strcpy(exe, variable);
    strcat(exe, "=Un_exemple_de_variable_modifiee");
    putenv(exe);
    // setenv(variable, "Un_exemple_de_variable_modifiee", 1);

    printf("getenv(%s)=%s\n", variable, getenv(variable));
  }
  else{
    printf("%s n'est pas une variable d'environnement\n", variable);
  }

  return 0;
}
