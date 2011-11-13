#include <stdio.h>
#include <stdlib.h>


int Somme(int t[],int n)
{
   int i,s=0;
   
   for(i=0;i<n;i++)
    {
	s += t[i];
    }
   
    return s;
}

int Produit(int t[],int n)
{
   int i,p=1;
   for(i=0;i<n;i++)
    p *= t[i];
  
   return p;
}

void saisie_taille(int *n)
{
    do
    {
        printf("Donner la taille du tableau\n");
        scanf("%d",n);
    }while( *n >100 || *n< 1);
}

void remplissage_tab(int *t,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       printf("donner l'element t[%d]\n",i);
       scanf("%d",&t[i]);
    }
}


int main(int argc, char **argv)
{
   int t[50],n, som, prod;
   
   saisie_taille(&n);
   remplissage_tab(&t[0],n);
   som = Somme(t,n);
   prod = Produit(t,n);

   printf("La somme est %d\n",som);
   printf("Le produit est %d\n",prod);

   return 0;

}
