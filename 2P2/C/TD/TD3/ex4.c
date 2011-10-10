#include <stdio.h>
#include <stdlib.h>

int saisie(void)
{
   int n = 0;
   while(1)
   {
     printf("Donner un entier strictement positif n\n");
     scanf("%d",&n);
     if(n<=0)
      printf("Erreur n doit être positif\n");
     else
      return n;
   }
}
  
 


int main(int argc, char **argv)
{
  int n = 0,i = 0;
  
  n=saisie();
  for(i=n;i>0;i--)
   { 
     if((i%2))
    printf("%d ",i);
   }
  return 0;
}
