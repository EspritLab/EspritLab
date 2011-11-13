#include <stdio.h>
#include <stdlib.h>


void SomProd(int t[],int n)
{
   int i,s=0,p=1;
   
   for(i=0;i<n;i++)
    {
	s += t[i];
	p *= t[i];
    }
   
    printf("La somme est %d\n",s);
    printf("Le produit est %d\n",p);
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
   int t[50],n;
   
   saisie_taille(&n);
   remplissage_tab(&t[0],n);
   SomProd(t,n);
   return 0;

}
