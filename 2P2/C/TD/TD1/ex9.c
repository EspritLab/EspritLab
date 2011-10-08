#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
  float tC = 0.0,tF = 0.0;
  
  printf("Donner la valeur de la températeur en Fahrenheit\n");
  scanf("%f",&tF);
  tC = (5/9)*(tF-32);
  printf("La température en Celsis est : %f\n",tC);
  
  return 0;
}
