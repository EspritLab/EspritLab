#include <stdio.h>
#include <stdlib.h>


void saisie_taille(int *n)
{
   do
   {
    printf("Donner la taille du tableau\n");
    scanf("%d",n);
   }while( *n < 1 || *n>50);

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

void affichage(int t[],int n)
{
   int i;
   for(i=0;i<n;i++)
     printf("%d |",t[i]);
     printf("\n");
}


void permutation(int *a,int *b)
{
   int aux;
   aux = *a; 
   *a = *b;
   *b = aux;
}

void tri_bulle(int t[],int n)
{
   int i,j;
   
   for(i=0;i<n;i++)
   {
      for(j=0;j<n-i-1;j++)
      {
         if (t[j]>t[j+1])
          permutation(&t[j],&t[j+1]);
      }
   }

}


int main(int argc, char **argv)
{
   int t[50];
   int n;
    

   saisie_taille(&n);
   remplissage_tab(t,n);
   affichage(t,n);
   tri_bulle(t,n);
   affichage(t,n);

   return 0;
}
