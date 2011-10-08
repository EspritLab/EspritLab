#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float surface(float r)
{
  const float Pi = 3.1415;
  return pow(r,2)*Pi;
}

int main(int argc, char **argv)
{
  
  float rayon = 0.0;
  
  printf("Donner le rayon du cercle :\n");
  scanf("%f",&rayon);
  printf("La surface du cercle est : %f\n",surface(rayon));
  
  return 0;
}
  
