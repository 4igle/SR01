#include <stdio.h>
#include <stdlib.h>

typedef struct complexe{
    float x;
    float y;
} Complexe;

void afficher(Complexe);
Complexe Somme(Complexe, Complexe);
Complexe Produit(Complexe, Complexe);


void afficher(Complexe z)
{
    if (z.y < 0)
        printf("%.2f - %.2fi\n", z.x, -z.y);
    else if (z.y > 0)
        printf("%.2f + %.2fi\n", z.x, z.y);
    else
        printf("%.2f\n", z.x);
}

Complexe Somme(Complexe z1, Complexe z2)
{
    Complexe z;
    z.x = z1.x + z2.x;
    z.y = z1.y + z2.y;
    return z;
}

Complexe Produit(Complexe z1, Complexe z2)
{
    Complexe z;
    z.x = z1.x * z2.x - z1.y * z2.y;
    z.y = z1.x * z2.y + z1.y * z2.x;
    return z;
}

int main()
{
    Complexe z1, z2, z3, z4;
    z1.x = 5.2;
    z1.y = 3.4;
    z2.x = 2.1;
    z2.y = -1.7;
    z3 = Somme(z1, z2);
    z4 = Produit(z1, z2);
    printf("z1 = ");
    afficher(z1);
    printf("z2 = ");
    afficher(z2);
    printf("z1 + z2 = ");
    afficher(z3);
    printf("z1 * z2 = ");
    afficher(z4);
    return 0;
}
