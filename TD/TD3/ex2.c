#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *jour[7] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};

    int premier_jour, date, jour_du_mois;

    // Saisie jusqu'à ce que la donnée soit correcte
    do{
        printf("Donner l'indice du premier jour du mois : ");
        scanf("%d", &premier_jour);
    } while (premier_jour < 0 || premier_jour > 6);

    // Saisie jusqu'à ce que la donnée soit correcte
    do{
        printf("Donner la date : ");
        scanf("%d", &date);
    } while (date < 1 || date > 31);


    jour_du_mois = (premier_jour + date - 1) % 7;
    printf("Le %d est un %s", date, jour[jour_du_mois]);


    return 0;
}
