#include <stdio.h>

int main(int argc, char * argv[], char * envp[]) {
  int c = 0;
  while(*envp){
    printf("%s\n", *envp++);
    c++;
  }
  printf("Il y a %d variables d'environnement\n", c);
}
