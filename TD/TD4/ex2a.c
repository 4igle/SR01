
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE 10

int main ()

{
    for (int i = 0; i < TAILLE; i++){
        for (int j = 0; j < TAILLE - i -1; j++)
            printf(" ");

        for (int j = 0; j < 2 * (i + 1) - 1; j++)
            printf("*");

        printf("\n");
    }

    for (int k = 0; k < 4; k++) {
        for (int i = 0; i < TAILLE - 3; i++)
            printf(" ");

        printf("||||");

        printf("\n");
    }

    return 0;

}



//919
//838
//757
