#include <stdio.h>
#include <stdlib.h>

int saisie(void)
{ 
  int a = 0;
  while(1)
  {
  printf("Donner un entier compris entre [0,999]\n");
  scanf("%d",&a);
  if(a>999 || a<0)
    printf("Erreur de saisie\n");
  else 
    return a;
  }
}

int main(int argc, char **argv)
{
  int a = 0;
  a = saisie();
  printf("Voici la décomposition du nombre :\n");
  printf("Centaines : %d\nDizaines : %d\nUnités : %d\n",a/100,(a%100)/10,(a%100)%10);
  return 0;
}
