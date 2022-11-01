#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int jeu_ordi (int nb_allum, int prise_max)
{
    int prise = 0;
    int s = 0;
    float t = 0;
    s = prise_max + 1;
    t = ((float) (nb_allum - s)) / (prise_max + 1);

    while (t != floor (t)) // remplacer par "while (t != (int) t)" si floor ne fonctionne pas
    {
        s--;
        t = ((float) (nb_allum-s)) / (prise_max + 1);
    }
    prise = s - 1;
    if (prise == 0)
        prise = 1;
    return (prise);
}

void afficher_allumettes(int n){
    printf("Nombre d'allumettes restantes : %d\n", n);
    for (int i = 0; i < n; i++){
        printf("  o");
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("  |");
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("  |");
    }
    printf("\n");
}



int main ()
{
    int nb_max_d=0; /*nbre d'allumettes maxi au départ*/
    int nb_allu_max=0; /*nbre d'allumettes maxi que l?on peut tirer au maxi*/
    int qui=0; /*qui joue? 0=Nous --- 1=PC*/
    int prise=0; /*nbre d'allumettes prises par le joueur*/
    int nb_allu_rest=0; /*nbre d'allumettes restantes*/

    do {
        printf("Nombre d'allumettes disposées entre les deux joueurs (entre 10 et 60) : ");
        scanf("%d", &nb_max_d);
        printf("\nNombre maximal d'allumettes que l'on peut retirer : ");
        scanf("%d", &nb_allu_max);
        printf("\nQuel joueur commence? 0--> Joueur ; 1--> Ordinateur : ");
        scanf("%d", &qui);
        printf("\n");
        if (nb_max_d < 10 || nb_max_d > 60 || nb_allu_max <= 0 || (qui != 0 && qui != 1) || nb_allu_max > nb_max_d)
            printf("Erreur, veuillez saisir les données correctement\n\n");
    } while (nb_max_d < 10 || nb_max_d > 60 || nb_allu_max <= 0 || (qui != 0 && qui != 1) || nb_allu_max > nb_max_d);

    nb_allu_rest = nb_max_d;

    while(nb_allu_rest > 0){
        afficher_allumettes(nb_allu_rest);

        // tour du joueur
        if (qui == 0){
            do {
                printf("\nCombien d'allumettes souhaitez-vous piocher ? ");
                scanf("%d", &prise);
                printf("\n");

                if (prise <= 0 || prise > nb_allu_rest || prise > nb_allu_max)
                    printf("Erreur, prise incorrecte\n");
            } while (prise <= 0 || prise > nb_allu_rest || prise > nb_allu_max);

            nb_allu_rest -= prise;
            qui = 1;
        }

        // tour de l'ordinateur
        else{
            prise = jeu_ordi(nb_allu_rest, nb_allu_max);
            printf("\nPrise de l'ordi : %d\n\n", prise);
            nb_allu_rest -= prise;
            qui = 0;
        }
    }

    // si qui == 0, le dernier à avoir joué, et donc celui qui a retiré la dernière allumette est l'ordinateur (1)
    if (qui == 0)
        printf("Vous avez gagné !\n");
    else
        printf("Vous avez perdu !\n");

    return 0;
}
