#include <stdio.h>
#include <stdlib.h>


#define MAX 100

void saisie_taille(int *n)
{
   do
   {
      printf("Donner la taille d'une matrice carée \n");
      scanf("%d",n);
   }while(*n> MAX || *n < 1);
}

void remplissage_mat(int n, int m[MAX][MAX])
{
   int i,j;
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
        {
          printf("Donner l'element A[%d][%d]\n",i,j);
          scanf("%d",&m[i][j]);
        }
   }
}

int estSymetrique(int M[MAX][MAX],int n)
{
    int i,j,ok = 1;
    for(i=0;i<n && ok;i++)
    {
       for(j=0;j<n && ok;j++)
        {
            if(M[i][j]!=M[j][i])
              ok = 0;
        }
    }
     
    return ok;
}

void affichage_mat(int n,int m[MAX][MAX])
{
    int i,j;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
         printf("%d ",m[i][j]);
       printf("\n");
    }
}


int main(int argc, char **argv)
{
   int M[MAX][MAX];
   int n;
   
   saisie_taille(&n);
   remplissage_mat(n,M);
   affichage_mat(n,M);
   if(estSymetrique(M,n))
      printf("Matrice symétirque\n");
   else
      printf("N'est pas symetrique\n");
   
   return 0;
}
