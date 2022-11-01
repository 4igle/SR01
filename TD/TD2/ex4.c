#include <stdio.h>
#include <stdlib.h>

typedef struct complexe{
    float x;
    float y;
} Complexe;

union valeur{
    int entier;
    float reel;
    struct complexe complexe;
};

enum genre {entier, reel, complexe};

typedef struct nombre{
    enum genre  type;
    union valeur valeur;
}nombre ;

nombre saisir_nombre();
void afficher_nombre(nombre);
void afficher(Complexe);

void afficher(Complexe z)
{
    if (z.y < 0)
        printf("%.2f - %.2fi\n", z.x, -z.y);
    else if (z.y > 0)
        printf("%.2f + %.2fi\n", z.x, z.y);
    else
        printf("%.2f\n", z.x);
}

nombre saisir_nombre(){
    nombre n;
    int choix;
    printf("1-entier\n2-reel\n3-complexe\n");
    scanf("%d",&choix);
    switch (choix){
        case 1:
            n.type=entier;
            printf("entier:");
            scanf("%d",&n.valeur.entier);
            break;
        case 2:
            n.type=reel;
            printf("reel:");
            scanf("%f",&n.valeur.reel);
            break;
        case 3:
            n.type=complexe;
            printf("complexe:");
            scanf("%f %f",&n.valeur.complexe.x,&n.valeur.complexe.y);
            break;
        default:
            printf("erreur");
            break;
    }
    return n;
}

void afficher_nombre(nombre n){
    switch (n.type){
        case entier:
            printf("%d",n.valeur.entier);
            break;
        case reel:
            printf("%f",n.valeur.reel);
            break;
        case complexe:
            afficher(n.valeur.complexe);
            break;
        default:
            printf("erreur");
            break;
    }
}





int main()
{
    nombre n;
    n=saisir_nombre();
    afficher_nombre(n);

    return 0;
}
