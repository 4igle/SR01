#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("/bin/ls -la :\n\n");
  system("/bin/ls -la ");

  printf("\n\n\n\n");

  printf("/bin/ls *.c :\n\n");
  system("/bin/ls *.c");
  return 0;
}