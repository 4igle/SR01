#include <stdio.h>
#include <stdlib.h>

int main()
{
    // afficher la taille des types de base en c
    printf("Taille d'un void : %lu octets\n", sizeof(void));
    printf("Taille d'un char : %lu octets\n", sizeof(char));
    printf("Taille d'un short : %lu octets\n", sizeof(short));
    printf("Taille d'un int : %lu octets\n", sizeof(int));
    printf("Taille d'un long : %lu octets\n", sizeof(long));
    printf("Taille d'un float : %lu octets\n", sizeof(float));
    printf("Taille d'un double : %lu octets\n", sizeof(double));
    printf("Taille d'un long double : %lu octets\n", sizeof(long double));
    return 0;
}
