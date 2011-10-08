#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
   float r1,r2,r3;
   
   printf("Donner les 3 résistance r1,r2,r3\n");
  
   scanf("%d %d %d",&r1,&r2,&r3);
   
   printf("La resistance equivalent :\n");
   prinf("Rserie : %f\n",r1+r2+r3);
   printf("Rparalelle : %f\n",(r1*r2*r3)/(r1*r2+r1*r3+r2*r3));
   
   return 0;
}
