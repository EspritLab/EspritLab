#include <stdio.h>
#include <stdlib.h>




int main(int argc, char **argv)
{
  float x=0,xp=0,xn=0;  // x lecture
  int i=0,np=0,z = 0;  // i compteur pour la boucle, np compte les nombres positifs
  
  printf("Entrer 20 valeurs positives ou négatives\n");
  
  for(i=0;i<20;i++)
  {
    printf("Donner une nouvelle valeur\n");
    scanf("%f",&x);
    if(x<0) 
      xn += x;
    else if(x>0)
     {
       xp += x;
       np++;
     }else 
      z++;
  }
    if(z!=20)
    {
       if(np==20)
        printf("Pas de nombres négatifs\n");
       else
        printf("La moyenne des nombres négatifs est %f\n",xp/20-np);

       if(np==0)
        printf("Pas de nombres positifs\n");
       else
        printf("La moyenne des nombres négatifs est %f\n",xn/np);
    }else
     printf("La moyenne est 0 pour les deux cas\n");
  return 0;
}
