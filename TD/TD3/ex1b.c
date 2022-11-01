#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
    int tab1[MAX] = {6, 4, 5, 10, 8, 9, 7, 1, 2, 3};
    int tab2[MAX] = {7, 8, 1, 10, 6, 3, 2, 5, 4, 9};
    int tab3[MAX];

    // somme inverse en manipulant les pointeurs version 1
    int *p1 = tab1;
    int *p2 = tab2 + MAX - 1;
    int *p3 = tab3;

    for (int i = 0; i < MAX; i++){
        *p3 = *p1 + *p2;
        p1++;
        p2--;
        p3++;
    }

    // affichage du tableau
    printf("tab1: [ ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", tab3[i]);
    }
    printf("]\n");


    // somme inverse en manipulant les pointeurs version 2
    p1 = tab1;
    p2 = tab2 + MAX - 1;
    p3 = tab3;
    for (int i = 0; i < MAX; i++){
        *(p3 + i) = *(p1 + i) + *(p2 - i);
    }

    // affichage du tableau
    printf("tab1: [ ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", tab3[i]);
    }
    printf("]\n");

    return 0;
}
