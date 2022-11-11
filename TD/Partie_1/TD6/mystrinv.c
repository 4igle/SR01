#include "mystrinv.h"

char *mystrinv(char *s1, char *s2)
{
 char *p;
  int i, n;
p=s2;

n=0;
while(*p != '\0') {p++; n++;}



for(i=0;i<n;i++)
{
  p--;
  s1[i]=*p; 
  
}

return(s1);

}

