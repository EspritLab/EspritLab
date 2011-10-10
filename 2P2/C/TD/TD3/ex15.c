#include <stdio.h>
#include <stdlib.h>




int main(int argc, char **argv)
{
  int n = 0, i = 0, j = 0;
  
  printf("Donner le nombre de lignes\n");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
   for(j=n-i;j>0;j--)
    printf(" ");
   for(j=0;j<=i*2;j++)
    printf("*");
   printf("\n");
  }
return 0;
}
