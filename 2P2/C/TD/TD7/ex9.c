#include <stdio.h>
#include <stdlib.h>

void saisie_taill(int *n)
{
    do
    {
      printf("Donner la taille du tableau(n<50)\n");
      scanf("%d",n);
    }while( *n > 50 || *n < 1);
}

void remplissage_tab(int n,int t[50])
{
  int i;
  for(i=0;i<n;i++)
  {
      printf("Donner l'element [%d]\n",i);
      
