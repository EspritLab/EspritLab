#include <stdio.h>
#include <stdlib.h>




long factoriel(int n)
{
   if(n<1)
    return 1;
   else 
    return n*factoriel(n-1);
}

long cardinal(int n,int p)
{
   return (factoriel(n)/(factoriel(p)*factoriel(n-p)));
}


int main(int argc, char **argv)
{
   int n,p;
   long c;
   
   printf("Donner n et p pour calculer Cnp\n");
   scanf("%d %d",&n,&p);
   c = cardinal(n,p);
   printf("Le cardinal %ld\n",c);
  
   return 0;
}
