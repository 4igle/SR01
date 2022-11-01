
#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 3

int matrice_creuse(int matrice[N][M], int vecteur[N*M]){
    int i,j;
    int k=0;
    int nb_zero=0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(matrice[i][j]!=0){
                vecteur[k]=matrice[i][j];
                k++;
            }
            else{
                nb_zero++;
            }
        }
    }
    float ratio = (float) nb_zero / ((float) M * (float) N);
    if (ratio > 0.8)
        return 1;
    return 0;
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

    // Initialisation du vecteur
    int vecteur[N*M];

    // Appel de la fonction matrice_creuse()
    int creuse = matrice_creuse(tab, vecteur);
    printf("Matrice creuse : %d\n", creuse);

    // affichage du vecteur
    /*
    printf("Vecteur : ");
    for(int i=0;i<N*M;i++)
        printf("%d ",vecteur[i]);
    */


    return 0;
}
