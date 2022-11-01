#include "mystr.h"


void mystrupdown(char *s1, char *s2){
    for (int i = 0; i < strlen(s1); i++){
        if (s1[i] >= 'a' && s1[i] <= 'z'){
            s2[i] = s1[i] - ('a' - 'A');
        }
        else if (s1[i] >= 'A' && s1[i] <= 'Z'){
            s2[i] = s1[i] + ('a' - 'A');
        }
        else{
            s2[i] = s1[i];
        }
    }
}

void mystrinv(char *s1, char *s2){
    for (int i = 0, j = strlen(s1) - 1; i < strlen(s1); i++, j--){
        s2[j] = s1[i];
    }
}

int mystrchrn(char *s, char c){
    int nb = 0;
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == c){
            nb ++;
        }
    }
    return nb;
}

void mystrncpy(char *s1, char *s2, int n){

    if (n > strlen(s1)){
        n = strlen(s1);
    }

    int i = 0;
    while (i < n){
        s2[i] = s1[i - strlen(s1) - 1];
        i++;
    }
}

void mystrncat(char *s1, char *s2, int n){
    if (n > strlen(s1)){
        n = strlen(s1);
    }
    strcat(s2, s1 + strlen(s1) - n);
}
