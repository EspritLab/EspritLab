#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
   
   const float pBase = 3.397, pSupp = 4.322, ret = 0.022;
   float brut=0;
   int hBase = 0,hSupp = 0;

   printf("Donner réspéctivement le nombre d'heures de base et les heures supplémentaires : \n");
   scanf("%d %d",&hBase,&hSupp);
   brut = pBase * hBase + pSupp * hSupp;
   brut -= brut * ret;
   printf("Votre salaire brut sera : %f\n",brut);
   return 0;
}
   
