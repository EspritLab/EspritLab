#include <stdio.h>
#include <stdlib.h>



void saisie_taille(int *a,int *b)
{
   do
   {
      printf("Donner le nb de ligne et colone :\n");
      scanf("%d %d",a,b);
   }while((*a > 50 || *a<1) || *b>50 || *b<1);
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

   int A[50][50],B[50][50],C[50][50];
   int nbLia,nbLib,nbCola,nbColb;
   int i,j,k;
  
   printf("Saisie de la taille de A:\n");
   saisie_taille(&nbLia,&nbCola);
   printf("Saisie de la taille de b:\n");
   saisie_taille(&nbLib,&nbColb);
   printf("Remplissage de A :\n");
   remplissage_matrice(nbLia,nbColb,&A[0][0]);
   printf("Remplissage de B :\n");
   remplissage_matrice(nbLib,nbColb,&B[0][0]);
   
   printf("Affichage de A \n");
   affichage_mat(nbLia,nbCola,A);
   printf("Affichage de B \n");
   affichage_mat(nbLib,nbColb,B);
   printf("Calcul de AxB :\n");
   printf("Vérification ...\n");
   
   if(nbCola != nbLib)
    printf("Impossible de calculer le produit \n");
   else
    {
      printf("Calcul ...\n");
      for(i=0;i<nbLia;i++)
       { 
         for(j=0;j<nbColb;j++)
           {
               C[i][j]=0;
               for(k=0;k<nbLia;k++)
                 C[i][j] += A[i][k]*B[k][j];
           }
        }
     printf("Fin du calcul. \nAffichage  :\n");
     affichage_mat(nbLia,nbColb,C);
     }
  

  return 0;
}
