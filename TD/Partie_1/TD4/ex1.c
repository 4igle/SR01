
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void affiche_chaine(){
    char chaine[100];
    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, 100, stdin);


    // Décommenter/commenter la ligne suivante pour enlever/ne pas enlever le retour à la ligne
     chaine[strlen(chaine) - 1] = '\0';

    // taille
    printf("\nLa taille de la chaine est %lu (1ère méthode)\n", strlen(chaine));


    unsigned int i = 0;
    unsigned int nb_maj = 0;
    unsigned int nb_min = 0;
    unsigned int nb_blancs = 0;
    unsigned int nb_autre;
    while (chaine[i] != '\0'){
        if (chaine[i] >= 'A' && chaine[i] <= 'Z')
            nb_maj++;
        else if (chaine[i] >= 'a' && chaine[i] <= 'z')
            nb_min++;
        else if (chaine[i] == ' ' || chaine[i] == '\t')
            nb_blancs++;
        else
            nb_autre++;
        i++;
    }

    // Attention la chaine comptera un caractère de plus à la fin du fait qu'on appuie sur entrée
    // si on tape "bonjour", la chaine envoyée sera "bonjour\n" (+ le '\0' de fin de chaine)
    // On peut enlever ce caractère en faisant chaine[strlen(chaine) - 1] = '\0'; (décommenter la ligne)
    printf("La taille de la chaine est %u (2eme méthode)\n", i);
    printf("Le nombre de majuscules de la chaine est %u\n", nb_maj);
    printf("Le nombre de minuscules de la chaine est %u\n", nb_min);
    printf("Le nombre de blancs de la chaine est %u\n", nb_blancs);
    printf("Le nombre d'autres caracteres de la chaine est %u\n", nb_autre);

}


int main ()

{
    affiche_chaine();
    return 0;

}
