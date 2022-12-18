#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING_LENGTH 80

int main()
{
  FILE *fi, *fo;
  char buf[4] = "xxx\n";
  char c;
  int n;

  fi = fopen("fop.in", "r");
  if (fi == NULL){
    perror("fop erreur : ");
    exit(0);
  }

  fo = fopen("fop.out", "w+");
  if (fo == NULL){
    perror("fop erreur : ");
    exit(0);
  }

  while (!feof(fi)){
    n = fread(&c,1,1,fi);
    if (n==1){
      if (c!='\n')
        n = fwrite(&c, 1, 1, fo);
      else
        n = fwrite(buf, 1, 4, fo);
    }
  }

  fclose(fi);
  fclose(fo);

  return 0;
}
