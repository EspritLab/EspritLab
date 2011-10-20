#include <stdio.h>
#include <stdlib.h>



void saisie_taille(int *a)
{
   do
   {
      printf("Donner le nb de ligne et colone :\n");
      scanf("%d",a);
   }while((*a > 50 || *a<1));
}

void remplissage_matrice(int a,int *m)
{
    int i,j,k=0;
    for(i=0;i<a;i++)
     {  
       for(j=0;j<a;j++)
        {
         printf("Donner l'élément [%d][%d]\n",i,j);
         scanf("%d",&m[50*i+j]);
        }
     }
}

void affichage_mat(int a,int b,int m[50][50])
{
   int i,j;
   for(i=0;i<a;i++)
     {
       for(j=0;j<b;j++)
         printf("%d  |",m[i][j]);
       printf("\n");
     }
}

int main(int argc, char **argv)
{

   int A[50][50];
   int n;
   int i,j,ok=0;
  
   printf("Saisie de la taille de la matrice:\n");
   saisie_taille(&n);
   printf("Remplissage de la matrice :\n");
   remplissage_matrice(n,&A[0][0]);
   
   printf("Affichage de la matrice \n");
   affichage_mat(n,n,A);
   printf("Vérification ...\n");
   for(i=0;i<n && ok == 0;i++)
    {
       for(j=0;j<n && ok == 0 ;j++)
        {
          if(A[i][j]!=A[j][i])
             ok = 1;
        }
    }
  
   if(ok == 0)
      printf("Matrice symétrique\n");
   else
      printf("Matrice non symétirque\n");
  

  return 0;
}
