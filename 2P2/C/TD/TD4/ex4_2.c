#include <stdio.h>
#include <stdlib.h>



int main(int argc,char **argv)
{
  int t[10];
  int binf=0,bsup=9,v,i,m = 0,n=0;
  
  do
   {
     printf("Donner la taille du tableau\n");
     scanf("%d",&n);
   }while(n>50 || n<1);

  for(i=0;i<n;i++)
   {
     printf("Donner l'élément %d\n");
     scanf("%d",&t[i]);
   }
  
  printf("Donner la valeur à rechercher\n");
  scanf("%d",&v);
  i=0;
  while(binf < bsup)
  {
     m = (bsup+binf)/2;
     if(v > t[m])
       binf=m+1;
     else
       bsup=m;
   /* i++;
    printf("%d binf : %d bsup %d\n",i,binf,bsup);*/
  }

  if(v == t[bsup])
     printf("Trouvé dans la position %d",bsup);
  return 0;
}
