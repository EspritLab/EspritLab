/* Ex2 : Un programme qui Cherche la position du max dans une matrice 
*/
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
  int t[50][50];
  int i,j,n,m,pi=0,pj=0,ml=0;
  do
  {
  printf("Donner la taille de la matrice \n");
  scanf("%d %d",&n,&m);
  }while(n>50 || n<1 || m>50 || m<1);
  
  for(i=0;i<n;i++)
  {
     printf("\nRemplissage de la ligne %d\n",i);
     for(j=0;j<m;j++)
      {
 	printf("Donner un élément T[%d][%d]\n",i,j);
	scanf("%d",&t[i][j]);
       }
   }
  ml = t[0][0];
  for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       if(t[i][j]>ml)
        {
         ml = t[i][j];
         pi = i;
         pj = j;
        }
    }
  
  printf("Le maximum de cette matrice est %d et il se situe dans t[%d][%d]\n",ml,pi,pj);
   }
 return 0;
}
 
