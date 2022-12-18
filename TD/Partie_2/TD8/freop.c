#include <stdio.h>

int main(){
  FILE * fa;
  printf("Avant reopen\n");
  fa = freopen("freop.txt", "a+", stdout);

  if (fa == NULL){
    perror("freop erreur : ");
    exit(0);
  }

  printf("Apres freopen\n");

  fclose(fa);

  printf("Apres fclose(fa)\n");
  fa = freopen("/dev/tty", "a+", stdout);
  printf("apres freopen(/dev/tty)\n");

  return 0;
}