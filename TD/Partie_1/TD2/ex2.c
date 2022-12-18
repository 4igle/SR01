#include <stdio.h>
#include <stdlib.h>
#include "ex2.h"

// fonction qui déclare un tableau tab de taille MAX, et l'initialise avec tab[i] = i + VAL
void creation_tableau(int tab[MAX]) {
    for (int i = 0; i < MAX; i++) {
        tab[i] = i + VAL;
    }

    // affichage du tableau
    for (int i = 0; i < MAX; i++) {
        printf("%d ", tab[i]);
    }
}


int main()
{
    int tab[MAX];
    creation_tableau(tab);
    return 0;
}
