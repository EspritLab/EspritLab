#include <stdio.h>
#include <stdlib.h>



void saisie_taille(int *a,int *b)
{
   do
   {
      printf("Donner le nb de ligne et colone :\n");
      scanf("%d %d",a,b);
   }while((*a > 50 || *a<1) || *b > 50 || *b<1);
}

void remplissage_matrice(int a,int b,int *m)
{
    int i,j,k=0;
    for(i=0;i<a;i++)
     {  
       for(j=0;j<b;j++)
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

   int A[50][50],Max[50][50],Min[50][50],C[50][50];
   int m,n;
   int i,j,aux,im,jm;
  
   printf("Saisie de la taille de la matrice:\n");
   saisie_taille(&m,&n);
   printf("Remplissage de la matrice :\n");
   remplissage_matrice(m,n,&A[0][0]);
   
   printf("Affichage de la matrice \n");
   affichage_mat(n,n,A);
   printf("Vérification ...\n");
   for(i=0;i<m;i++)       // Max colones 
    {   
        aux=A[i][0];
        im=i;
        jm=0;
        for(j=0;j<n;j++)
          {
             if(A[i][j]>aux)
              {
               aux=A[i][j];
               im=i;
               jm=j;
              }
          }
            Max[im][jm]=1;
    }

  for(j=0;j<n;j++)
    {
          aux = A[0][j];
          im=0;
          jm=j;
         for(i=0;i<m;i++)
          { 
              if( A[i][j]<aux)
               {
                  aux = A[i][j];
                  im=i;
                  jm=j;
               }
          }
          Min[im][jm]=1;
    }

   printf("matrice Max1\n");
   affichage_mat(m,n,Max);
   printf("Matrice Min2\n");
   affichage_mat(m,n,Min);

 for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
      {
        if((Max[i][j]==Min[i][j]) && Max[i][j]==1)
         {
           C[i][j]=1;
           printf("A[%d][%d] est un Point Col\n",i,j);
         }
        else
           C[i][j]=0;
      }
 }
  

  return 0;
}
