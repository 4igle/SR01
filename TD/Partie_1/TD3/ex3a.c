#include<stdio.h>

int main()
{
  int i = 456;
  long int  l = 123123123L;
  unsigned int ui = 45645U;
  unsigned long int  ul = 2123123123UL;
  double  d = 123.45;
  long double  ld = 9.87e35;

  printf("Affichage en décimal :\n");
  printf("   i = %d\n",    i);
  printf("   l = %ld\n",   l);
  printf("  ui = %u\n",   ui);
  printf("  ul = %lu\n\n",  ul);

  printf("Affichage en octal :\n");
  printf("  ui = %o\n",    ui);
  printf("  ul = %lo\n\n", ul);

  printf("Affichage en hexadécimal :\n");
  printf("  ui = %X\n",    ui);
  printf("  ul = %lX\n\n", ul);

  printf("Affichage du signe :\n");
  printf("|%d|  |%+d|  |%d| \n",  -123,  -123, -123);
  printf("|%d|  |%+d|  |%d| \n\n",  123,  123, 123);

  printf("Affichage en octal et en hexadécimal :\n");
  printf("|%x|  |%#x|  \n",  123,  123);
  printf("|%X|  |%#X|  \n",  123,  123);
  printf("|%o|  |%#o|  \n",  123,  123);

  printf("Affichage avec spécification de la largeur \n");
  printf("du champs d'impression et du nombre de digits :\n");
  printf("|%.4d| \n",  123);
  printf("|%+.4d| \n",  123);
  printf("|%#.4X| \n\n",  123);

  printf("|%5d|  |%-5d| \n",  123, 123);
  printf("|%+5d|  |%+-5d| \n",  123, 123);
  printf("|%#5X|  |%#-5X| \n\n",  123, 123);

  printf("|%+6.4d| \n",  123);
  printf("|%6.4o| \n",  123);
  printf("|%#6.4X| \n\n",  123);

  printf("Affichage de nombres avec virgule flottante :\n");
  printf("|%f| \n", 3.14157);
  printf("|%.3f| \n", 3.14157);
  printf("|%.0f| \n", 3.14157);
  printf("|%#.0f| \n\n", 3.14157);

  printf("|%E| \n",      1.23456e123);
  printf("|%.3E| \n",    1.23456e123);
  printf("|%.0E| \n",    1.23456e123);
  printf("|%#.0E| \n\n", 1.23456e123);

  printf("|%f|\t|%G| \n", 3.1, 3.1);
  printf("|%E|\t|%G| \n", 3.1e10, 3.1e10);

  printf("|%G|\t|%G| \n",  -0.0001,  0.00001);
  printf("|%G|\t|%G| \n", 3.1e5, 3.1e6);
  printf("|%.11G|\t|%.11G| \n", 3.1e10, 3.1e11);
}

/*
printf :
format : %bsox.yt

b => '#' pour non entier base 10, permet d'afficher le nombre précédé de sa base
s => '+' pour un nombre en base 10, affiche son signe qu'il soit positif ou négatif
o => '-' permet d'afficher le nombre au début/fin de l'espace qui lui a été donné avec 'x'
x => nombre de place que prend le nombre lors de l'affichage
.y => nombre de chiffres significatifs après la virgule ou nombre de lettres affichées d'une string
t => type de la donnée affichée, mettre en majuscule pour afficher les nombres en majuscule
    %d <-> int
    %hd <-> short
    %ld <-> long
    %f <-> float
    %lf <-> double
    %c <-> char
    %s <-> string
    %p <-> pointer
    %u <-> unsigned
    %fu <-> unsigned float
    %lu <-> unsigned long
    %o <-> octal
    %x <-> hexa
    %X <-> hexa en majuscule
    %b <-> binary
    %e <-> exposant
    %E <-> exposant en majuscule
    %g <-> simplifie expression en choisissant double ou exposant en fonction du plus visuel
    %G <-> même chose mais en majuscule

*/
