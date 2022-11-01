#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int nb, char * arg[]){
    if (nb < 4){
        printf("Arguments manquants !\n");
        return 1;
    }

    float result;
    if (strcmp(arg[1], "-a") == 0){
        result = 0;
        for (int i = 2; i < nb; i++){
            result += atof(arg[i]);
        }
    }
    else if (strcmp(arg[1], "-p") == 0){
        result = 1;
        for (int i = 2; i < nb; i++){
            result *= atof(arg[i]);
        }
    }
    else if (strcmp(arg[1], "-d") == 0){
        result = atof(arg[2]);
        for (int i = 3; i < nb; i++){
            result /= atof(arg[i]);
        }
    }
    else {
        printf("Argument non valide !\n");
        return 1;
    }

    printf("%.2f\n", result);

    return 0;
}
