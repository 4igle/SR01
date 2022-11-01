
#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10
#define NBRE 3

int main ()

{
    for (int i = 0; i < TAILLE; i++){
        for (int a = 0; a < NBRE; a++){
            for (int j = 0; j < TAILLE - i - 1; j++)
                printf(" ");

            for (int j = 0; j < 2 * (i + 1) - 1; j++)
                printf("*");

            for (int j = 0; j < TAILLE - i - 1; j++)
                printf(" ");

            printf(" ");
        }
        printf("\n");
    }

    // le sujet n'est pas clair si le tronc doit faire 4 lignes ou 5 lignes
    for (int k = 0; k < 5; k++) {
        for (int a = 0; a < NBRE; a++){
            for (int i = 0; i < TAILLE - 3; i++)
                printf(" ");

            printf("||||");

            for (int i = 0; i < TAILLE - 2; i++)
                printf(" ");

            printf(" ");
        }
        printf("\n");
    }

    return 0;

}
