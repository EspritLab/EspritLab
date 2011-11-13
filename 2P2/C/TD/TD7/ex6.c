#include <stdio.h>
#include <stdlib.h>

void saisie_taille(int *n);
void controle_saisie(int *c);
void remplissage_tab(int t[],int n);
void affichage_tab(int t[],int n);
int est_equilibree(int t[],int i,int j);
void coupe_max(int t[],int n,int *l,int *i,int *j);

int main(int argc, char **argv)
{
   int t[50];
   int n,l,i,j;
   
   saisie_taille(&n);
   remplissage_tab(t,n);
   affichage_tab(t,n);
   coupe_max(t,n,&l,&i,&j);
   if(l>0)
     printf("La coupe la plus longue est [%d..%d] de longueur %d\n",i,j,l);
   else
     printf("Il n'y a pas de coupes dans ce tableau, il n'est même pas equilibré !\n");
  
  return 0;
}

void saisie_taille(int *n)
{
  do
   {
     printf("Donner la taille du tableau (0<n<=50)\n");
     scanf("%d",n);
   }while( *n < 0 || *n > 50);
}

void controle_saisie(int *c)
{
   do
    {
     scanf("%d",c);
    }while( (*c != 0) && (*c != 1));
}

void remplissage_tab(int t[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
     printf("Donner l'élément %d\n",i);
     controle_saisie(&t[i]);
   }
}

void affichage_tab(int t[],int n)
{ 
  int i;
  for(i=0;i<n;i++)
     printf("%d ",t[i]);
  printf("\n");
}
int est_equilibree(int t[],int i,int j)
{  int k,n0=0,n1=0;
   for(k=i;k<=j;k++)
   {
      if(t[k])
        n1++;
      else
        n0++;
   }
   if(n1 == n0)
     return 1;
   else
     return 0;
}

void coupe_max(int t[],int n,int *l,int *i,int *j)
{
  int ai,aj,k;
  *l = 0;
  for(k=0;k<n-1;k++)
  {
     ai=0;
     aj=k+1;
     while(aj<n)
     {
       if(est_equilibree(t,ai,aj))
        {
         //printf("La coupe [%d..%d] est equilibree\n",ai,aj);
         if(*l< aj-ai+1)
          {
           *l = aj- ai+1;
           *i = ai;
           *j = aj;
          }
        }
       ai++;
       aj++;
     }
  }
     

}
