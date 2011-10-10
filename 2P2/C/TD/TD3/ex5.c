#include <stdio.h>
#include <stdlib.h>


#define NB_ETUDIANT 35


float saisir_note(void)
{
   float note = 0.0;
   while(1)
   {
      scanf("%f",&note);
      if(note>=0 && note <= 20)
       return note;
      else
       printf("Erreur de saisie\nRéessayer ...\n");
   }
}

  

int main(int argc, char **argv)
{
  
  float nProg = 0.0, nAng = 0.0, nProgTotale = 0.0, nAngTotale = 0.0;
  int i = 0;
  
  for(i=0;i<NB_ETUDIANT;i++)
  {
    printf("Etudiant n %d:\n",i+1);
    printf(" Anglais : \n");
      nAng = saisir_note();
    printf(" Programmation :\n");
      nProg = saisir_note();
    printf("La moyenne de l'étudiant %d est %f\n",i,(nProg+nAng)/2);
      nProgTotale += nProg;
      nAngTotale  += nAng;
  }
   printf("La moyenne de la classe en Programmation est %f\n",nProgTotale/NB_ETUDIANT);
   printf("La moyenne de la classe en Anglais est %f\n",nAngTotale/NB_ETUDIANT);
  
   return 0;
}
    
  
