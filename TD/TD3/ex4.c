#include<stdio.h>


/*
int main(void)
{
  int x = 10; // x = 10
  int y, z; // y et z déclarés
  x *= y = z = 4; // z = 4 renvoie 4, y = 4 renvoie 4, x *= 4 renvoie 40, x = 40

  printf("x = %d \n",x); // x = 40
}
*/

/*
int main(void)
{
  int x, y, z; // x, y et z déclarés
  x = 2; y = 1; z = 0; // x = 2, y = 1, z = 0
  x = x && y || z; // x && y renvoie 1 car x != 0 et y != 0, 1 || z renvoie 1 car 1 != 0, x = 1
  printf("x = %d \n",x); // x = 1
}
*/

/*
int main(void)
{
  int x = 2, y = 1, z = 0; // x = 2, y = 1, z = 0
  z += -x++ + ++y; // x++ renvoie 2 (incrémente x après l'opération), ++y renvoie 2 (incrémente y avant l'opération), -2 + 2 renvoie 0, z += 0 renvoie 0, z = 0
  printf("x=%d  y=%d  z=%d  \n",x, y, z); // x = 3, y = 2, z = 0
}
*/

/*
int main(void)
{
  int x = 3, z = 0; // x = 3, z = 0
  z = x / ++x; // ++x renvoie 4 (incrémente x avant l'opération), 4 / 4 renvoie 1, z = 1
  printf("x=%d    z=%d  \n",x, z); // x = 4, z = 1
}
*/

/*
int main(void)
{
  int x = 03, y = 02, z = 01;
  // x = 3, y = 2, z = 1
  // en binaire : x = 0000 0011, y = 0000 0010, z = 0000 0001
  int a, b; // a et b déclarés

  a = x | y & ~z;
  // ~z renvoie -2 (complément à 1 de z), 1 -> 0000 0001 -> 1111 1110
  // y & ~z renvoie 2, 0000 0010 & 1111 1110 = 0000 0010
  // x | 2 renvoie 3, 0000 0011 | 0000 0010 = 0000 0011

  b = x ^ y & ~z;
  // x ^ 2 renvoie 1, 0000 0011 ^ 0000 0010 = 0000 0001

  printf("a=%d  b=%d \n", a, b); // a = 3, b = 1
 }
*/

/*
int main(void)
{
  int x = 01, y = -01;
  // x = 1, y = -1
  // en binaire : x = 0000 0001, y = 1111 1111

  int a; // a déclaré

  a = ~x | x;
  // ~x renvoie -2 (complément à 1 de x), 1 -> 0000 0001 -> 1111 1110
  // -2 | 1 renvoie -1, 1111 1110 | 0000 0001 = 1111 1111

  y <<= 3;
  // y <<= 3 renvoie -8, 1111 1111 << 3 = 1111 1000
  printf("a=%d  y=%d \n", a, y); // a = -1, y = -8
}
*/

/*
int main(void)
{
  int x = 3, y = 2; // x = 3, y = 2
  int a; // a déclaré
  a = x < y ? x++ : y++; // x < y renvoie 0 car 3 n'est pas inférieur à 2, x++ est ignoré et y++ renvoie 2 (incrémente y après l'opération), a = 2
  printf("x=%d y=%d a=%d \n", x, y, a); // x = 3, y = 3, a = 2
}
*/

/*
int main(void)
{
  int x = -1, y = -1, z = -1; // x = -1, y = -1, z = -1
  int a; // a déclaré
  a = ++x && ++y || ++z;
  // ++x renvoie 0 (incrémente x avant l'opération), ++y n'est pas exécuté, car première condition du "&&" fausse, ++z renvoie 0 (incrémente z avant l'opération)
  // 0 && 0 renvoie 0 car 0 == 0, 0 || 0 renvoie 0 car 0 == 0, a = 0
  printf("y=%d  a=%d \n", y, a); // y = -1, a = 0
}
*/
