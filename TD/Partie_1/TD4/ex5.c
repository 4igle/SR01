#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<time.h>

#define TAILLE 50

void initialiser_matrice(int matrice[TAILLE][TAILLE])
{
    int i, j;
    for (i = 0; i < TAILLE; i++)
    {
        for (j = 0; j < TAILLE; j++)
        {
            matrice[i][j] = rand() % 2;
        }
    }
}

void afficher_matrice(int matrice[TAILLE][TAILLE])
{
    int i, j;
    for (i = 0; i < TAILLE; i++)
    {
        printf("\t");
        for (j = 0; j < TAILLE; j++)
        {
            switch (matrice[i][j]) {
                case 0:
                    printf("░░");
                    break;
                case 1:
                    printf("██");
                    break;
            }
        }
        printf("\n");
    }
}

int voisin_matrice(int matrice[TAILLE][TAILLE], int i, int j)
{
    int nb_voisins = 0;

    for (int k = i - 1; k < i + 2; k++){
        if (matrice[(k + TAILLE) % TAILLE][(j - 1 + TAILLE) % TAILLE] != 0)
            nb_voisins++;
        if (matrice[(k + TAILLE) % TAILLE][(j + 1) % TAILLE] != 0)
            nb_voisins++;
        if (((k + TAILLE) % TAILLE != i) && (matrice[(k + TAILLE) % TAILLE][j] != 0)) {
            nb_voisins++;
        }
    }

    return nb_voisins;
}

void game_of_life(int matrice[TAILLE][TAILLE]){
    int voisin = 0;
    int nouvelle_matrice[TAILLE][TAILLE];

    for (int i = 0; i < TAILLE; i++){
        for (int j = 0; j < TAILLE; j++){
            voisin = voisin_matrice(matrice, i, j);

            switch (voisin) {
                case 2:
                    nouvelle_matrice[i][j] = matrice[i][j];
                    break;
                case 3:
                    nouvelle_matrice[i][j] = 1;
                    break;
                default:
                    nouvelle_matrice[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < TAILLE; i++){
        for (int j = 0; j < TAILLE; j++){
            matrice[i][j] = nouvelle_matrice[i][j];
        }
    }
}


int main ()
{
    int generations = 0;
    int tab[TAILLE][TAILLE];
    initialiser_matrice(tab);

    while (generations <= 0){
        printf("Combien de générations voulez-vous ? ");
        scanf("%d", &generations);
    }

    for (int i = 0; i < generations; i++){
        system("clear");
        afficher_matrice(tab);
        usleep(500000);
        game_of_life(tab);
    }
    return 0;
}
