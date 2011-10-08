#include <stdio.h>
#include <stdlib.h>

int div(int a,int b)
{
   return a/b;
}

int reste(int a,int b)
{
   return a%b;
}

int main(int argc, char **argv)
{
  int a,b;
  printf("Donner deux nombres pour la division a/b\n");
  
  scanf("%d %d",&a,&b);
  if(b!=0)
  {
    printf("%d/%d=%d\n",a,b,div(a,b));
    printf("Le reste de la division est : %d\n",reste(a,b));
  }
  else 
   printf("Division par 0 est impossible\n");
  
  return 0;
}
