/*Ex: Un programme qui remplit une matrice t de taille n 
*/
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
  int t[50][50];
  int i,j,n;
  do
  {
  printf("Donner la taille de la matrice \n");
  scanf("%d",&n);
  }while(n>50 || n<1);
  
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
      {
 	printf("Donner un élément\n");
	scanf("%d",&t[i][j]);
       }
   }
 return 0;
}
 
