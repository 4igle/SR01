
#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 3


void matrice_info(int tab[N][M]){
    int nb_pos = 0;
    int nb_neg = 0;
    int nb_zero = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (tab[i][j] < 0)
                nb_neg++;
            else if (tab[i][j] > 0)
                nb_pos++;
            else
                nb_zero++;
        }
    }

    printf("Nombre de positifs : %d\n", nb_pos);
    printf("Nombre de negatifs : %d\n", nb_neg);
    printf("Nombre de zeros : %d\n", nb_zero);

    float ratio = (float) nb_zero / ((float) M * (float) N);

    if (ratio > 0.8)
        printf("matrice creuse");
}

int main ()

{
    // Initialisation de la matrice
    int tab[N][M];

    // saisie de la matrice
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("tab[%d][%d] = ", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
    matrice_info(tab);


    return 0;
}
