#include<stdio.h>
#include "mystr.h"
#include<stdlib.h>

int main(){
char* s1="ABcd";
char* s2;
s2=malloc(sizeof(0));


printf("\t 1: mystrUpDown()\n\t 2: mystrinv()\n\t 3: mystrncat()\n\t 4:mystrchrn()\n");



int choix;

do {
printf("donner votre choix:--> ");
scanf("%d", &choix);
switch(choix){
  case 1:
    mystrupdown(s1,s2);
    printf("s1=%s     s2=%s \n",s1,s2);
    break;

  case 2 :
    mystrinv(s1,s2);
    printf("\nvoici votre chaine inversée: %s \n",s2);
    break;

  case 3:
    mystrncat(s1,s2,2);
    printf("s1=%s     s2=%s \n",s1,s2);
    break;

  case 4 :
    printf("donner votre chaine:  ");
    s1=malloc(0);
    scanf("%s", s1);
    printf("\n donner le car recherche:  ");getchar();
    char c=getchar();
    printf("\nresultat: %s contient %d caractères %c \n",s1,mystrchrn(s1,c),c);
    break;

    default: printf("\nbye");
    exit(1);


}
s2=malloc(0);


}while(1);




return 0;
}
