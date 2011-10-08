#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char **argv)
{
  
  int a = 0, b = 0, c = 0, delta = 0;
  float x[2]={0.0,0.0}; 
  
  printf("Soit une equiation de la forme ax^2+bx+c=0\n");
  printf("Donner a,b et c pour résoudre l'equiation \n");
  scanf("%d %d %d",&a,&b,&c);
  printf("%d*x^2+%d*x+%d\n",a,b,c);
  if(a==0)
   printf("Ce n'est pas une equation au seconde degré il faut que a soit différent de zéro\n");
  else
  {
    delta = pow(b,2)-4*a*c;
    if(delta==0)
      printf("L'equation admet une solution double, soit : x = %.3f\n",(float)(-b)/(2*a));
    else if(delta>0)
     {
      printf("L'equation admet deux solutions :\n");
      printf("x1 = %.3f et x2 = %.3f\n",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
     }
     else
     {
       printf("L'equation admet dexu solutions complexes :\n");
       x[0] = (-b)/2*a;
       x[1] = sqrt(abs(delta))/2*a;
       printf("x1 = %.3f + i * %.3f\nx2 = %.3f - i * %.3f\n",x[0],x[1],x[0],x[1]);
     }
  }

  return 0;
}
