#include "mystrinv.h"
#include "mystrchrn.h"
#include "mystrshow.h"


int main(void)
  {

   int  n, choix;
   char s1[80], s2[80], c;


printf("\t 1: mystrncpy()\n\t 4: mystrinv()\n\t 6:mystrchrn()\n");



do {
printf("donner votre choix:--> ");
scanf("%d", &choix);
switch(choix){
	case 4 : printf("donner votre chaine:  ");
 		scanf("%s", s2);
		printf("\nvoici votre chaine invers�e: %s \n",mystrinv(s1,s2));

 		break;
	case 6 : printf("donner votre chaine:  ");
 		 scanf("%s", s1);
		printf("\n donner le car recherche:  ");getchar();
 		c=getchar();
		printf("\nresultat: %s contient %d caract�res %c \n",s1,mystrchrn(s1,c),c);

		break;

	default: printf("\nbye");exit(1);


}}while(1);

  return 0;

}

