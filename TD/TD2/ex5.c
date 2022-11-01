#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NBRE_ETUDIANTS 3

// structure Etudiant qui contient un nom, un prénom n_compte
struct Etudiant {
    char nom[20];
    char prenom[20];
    char n_compte[7];
};



// saisir un nouvel étudiant avec gestion des erreurs en cas de chaines trop longues
struct Etudiant SaisirEtudiant(){
    struct Etudiant etudiant;
    printf("Saisir le nom de l'étudiant : ");
    scanf("%s", etudiant.nom);
    printf("Saisir le prénom de l'étudiant : ");
    scanf("%s", etudiant.prenom);
    printf("Saisir le numéro de compte de l'étudiant : ");
    scanf("%s", etudiant.n_compte);
    return etudiant;
}

// afficher un étudiant
void AfficherEtudiant(struct Etudiant etudiant){
    printf("Nom : %s\n", etudiant.nom);
    printf("Prénom : %s\n", etudiant.prenom);
    printf("Numéro de compte : %s\n", etudiant.n_compte);
}


int main()
{
    struct Etudiant sr01[NBRE_ETUDIANTS];
    for (int i = 0; i < NBRE_ETUDIANTS; i++) {
        sr01[i] = SaisirEtudiant();
    }
    for (int i = 0; i < NBRE_ETUDIANTS; i++) {
        AfficherEtudiant(sr01[i]);
    }

    return 0;
}
