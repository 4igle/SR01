#include<stdio.h>

int main()
{
  int i1, i2, i3;
  float r1, r2, r3;
  char c1, c2, c3;
  char s1[10], s2[10], s3[10];
  char s4[4], s5[4], s6[4];

  printf("Entrez trois nombres décimaux :  ");
  scanf("%d%d%d",&i1, &i2, &i3);
  printf("Vous avez entré : %d\t%d\t%d\n", i1, i2, i3);

  printf("Entrez trois nombres décimaux :  ");
  scanf("%4f%4f%4f",&r1, &r2, &r3);
  printf("Vous avez entré : %f\t%f\t%f\n", r1, r2, r3);

  /* Lecture des chaines de caractères */

  printf("Entrez du texte :  ");
  scanf("%s%s%s",s1, s2, s3);
  printf("s1=|%s|\ts2=|%s|\ts3=|%s| \n", s1, s2, s3);
  scanf("%c%c%c",&c1, &c2, &c3);
  printf("c1='%c'\tc2='%c'\tc3='%c' \n", c1, c2, c3);

  printf("Entrez du texte :  ");
  scanf("%4c%4c%4c",s4, s5, s6);
  printf("s4=|%.4s|\ts5=|%.4s|\ts6=|%.4s| \n", s4, s5, s6);
}

/*
scanf :
format : %it

i => lit le nombre sur i caractères maximum (point compris pour les float)
t => type
  scanf("%4c%4c%4c",s4, s5, s6) lira 12 premiers, 8 après les 4 permiers, 4 après les 8 premiers

une str est un tableau de caractères, pour une chaîne indéterminée on peut utiliser %s,
et pour une chaîne dont on connaît la longueur i on peut utiliser %ic

ne pas oublier de vider le buffer
*/
