#include <stdio.h>


void saisie_taille(int *n)
{
  do
   {
     printf("Donner la taille du tableau (0<n<=50)\n");
     scanf("%d",n);
   }while( *n < 0 || *n > 50);
}

void remplissage_tab(int t[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
     printf("Donner l'élément %d\n",i);
     scanf("%d",&t[i]);
   }
}

void affichage_tab(int t[],int n)
{ 
  int i;
  for(i=0;i<n;i++)
     printf("%d ",t[i]);
  printf("\n");
}

void maxima(int t[],int n,int *imax,int *imin)
{
   int i;
   
   *imax = 0;
   *imin = 0;
   for(i=0;i<n;i++)
    {
      if(t[i]>t[*imax])
        *imax = i;
      if(t[i]<t[*imin])
        *imin = i;
    }
}



main()
{
   int t[50];
   int n, imax,imin;

   saisie_taille(&n);
   remplissage_tab(t,n);
   maxima(t,n,&imax,&imin);
   affichage_tab(t,n);
   printf("La position du max est %d et le min est %d \n",imax,imin);

}
   
