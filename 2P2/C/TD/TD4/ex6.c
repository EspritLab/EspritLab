#include <stdio.h>
#include <stdlib.h>

void saisie_taille(int *n,int max)
{
     do
     {
        //printf("Donner la taille du tableau\n");
        scanf("%d",n);
     }while(*n > max || *n < 1);
}

void remplissage_croissant(int n,int *t)
{
   int i=0;
   printf("Donner l'élément 0\n");
    scanf("%d",&t[0]);
    
    for(i=1;i<n;i++)
     { 
        do
        {
          printf("Donner l'élément %d\n",i);
          scanf("%d",&t[i]);
        }while(t[i]<t[i-1]);
     }
}
 
void affichage(int t[],int n)
{
   int i=0;
   
    for(i=0;i<n;i++)
      printf("%d |",t[i]);
}
int main(int argc, char **argv)
{
   int t1[50],t2[50],t3[100];

   int m,n,i,j,k;
   
   printf("Donner la taille du tableau t1\n");
   saisie_taille(&m,50);
   printf("Donner la taille du tableau t2\n");
   saisie_taille(&n,50);
   
   
   printf("Remplissage du tableau t1\n");
   remplissage_croissant(m,&t1[0]); 
   printf("Remplissage du tableau t2\n");
   remplissage_croissant(n,&t2[0]);    
   for(k=0,i=0,j=0;k<m+n;k++)
    { 
      if(j<n && i<m)
      {
       if(t1[i]<t2[j])
         t3[k]=t1[i++];
       else if(t1[i]>t2[j])
         t3[k]=t2[j++];
       else
        { 
          t3[k]=t1[i++];
          t3[++k]=t2[j++];
        }
      }else
       {
         if(j==n && i < m)
            t3[k]=t1[i++];
         else
             t3[k]=t2[j++];
       }
      
    }
    
    printf("Affichage de t1\n");
    affichage(t1,m);
    printf("Affichage de t2\n");
    affichage(t2,n);
    printf("Affichage t3\n");
    affichage(t3,m+n);
    
    return 0;
}
          



   
       
