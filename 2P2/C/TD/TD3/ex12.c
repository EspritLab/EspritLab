#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char **argv)
{
  int n = 0,i = 0, aux = 0, s = 0;
  

  printf("Donner un nombre n \n");
  scanf("%d",&n);
  for(i = 1; i<=n;i++)
  {
   aux = i;
   s = 0;
    while(aux != 0)
  {
    s += pow((aux % 10),3);
    aux /= 10;
  }
   
  if( s == i)
   printf("%d est un nombre d'Armstrong\n",i);
  }
 return 0;
}
