#include <stdio.h>
#include <string.h>
#include "mystr.h"
#define TAILLE_MAX 1000

int main(int nb, char * arg[]){
  if (nb < 2){
    printf("Erreur, nombre d'arguments incorrect.\n");
    return 1;
  }

  FILE* fichier = NULL;
  fichier = fopen(arg[1], "r+");
  if (fichier != NULL)
  {
      char chaine1[TAILLE_MAX] = "";
      char chaine2[TAILLE_MAX] = "";

      fgets(chaine1, TAILLE_MAX, fichier);

      mystrinv(chaine1, chaine2);

      fseek(fichier, 0, SEEK_SET);
      fprintf(fichier, "%s", chaine2);

      printf("%ld caractères ont été inversés.\n", strlen(chaine1));
      fclose(fichier);
  }
  else
  {
      printf("Impossible d'ouvrir le fichier %s\n", arg[1]);
  }

  return 0;
}
