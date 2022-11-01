#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
    int tab1[MAX] = {6, 4, 5, 10, 8, 9, 7, 1, 2, 3};
    int tab2[MAX] = {7, 8, 1, 10, 6, 3, 2, 5, 4, 9};
    int tab3[MAX];

    // somme inverse en manipulant les indices
    for (int i = 0; i < MAX; i++) {
        tab3[i] = tab1[i] + tab2[MAX - i - 1];
    }

    // affichage du tableau
    printf("tab1: [ ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", tab3[i]);
    }
    printf("]\n");

    return 0;
}
