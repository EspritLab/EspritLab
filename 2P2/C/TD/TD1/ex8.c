#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main(int argc, char **argv)
{
  const float Pi = 3.1415;
  float Volume = 0.0,rayon = 0.0, profondeur = 0.0;
  
  printf("Donner réspectivement le rayon et la profondeur du cylindre\n");
  scanf("%f %f",&rayon,&profondeur);
  
  Volume = rayon * rayon * Pi * profondeur;
  //Volume = pow(rayon,2) * Pi * profondeur;
  
  printf("Le volume du cylindre est %f\n",Volume);
  
  return 0;
}
  
  
