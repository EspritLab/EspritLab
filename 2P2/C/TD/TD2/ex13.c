#include <stdio.h>
#include <stdlib.h>


void saisie(int *h)
{
  while(1)
  {
    printf("Donner le nombre d'heure total suivit du prix de l'heure:\n");
    scanf("%d",h);
    if(h<0)
      printf("Erreur de saisie.\n");
    else
      break;
  }
}


void calcul(int h)
{
  printf("0%% : %d\n50%% : %d\n75%% : %d\n100%% : %d\n",h%39,h%40,h%45,h%50);
}



int main(int argc, char **argv)
{
  int h=0;
  saisie(&h);
  calcul(h);


 return 0;
}
