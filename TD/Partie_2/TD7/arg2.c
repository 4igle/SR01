#include <stdio.h>

extern char **environ;

int main() {
  int c = 0;
  while(environ[c] != NULL){
    printf("%s\n", environ[c]);
    c++;
  }
  printf("Il y a %d variables d'environnement\n", c);
}
