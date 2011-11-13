#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void saisie_coef(int *a,int *b,int *c)
{
    printf("Soit une equiation de la forme ax^2+bx+c=0\n");
    printf("Donner a,b et c pour résoudre l'equiation \n");
    scanf("%d %d %d",a,b,c);
}

int resoudre2(int a,int b,int c, float *x1, float *x2)
{
  int delta;
  printf("%d*x^2+%d*x+%d\n",a,b,c);
  if(a==0)
   {
    if(b == 0)
      return 0;
    else
     {
       *x1 = (float)(-c/b);
       return 1;
     }
  }
  else
  {
    delta = pow(b,2)-4*a*c;
    if(delta==0)
     {
      *x1=(float)(-b)/(2*a);
      return 1;
     }
    else if(delta>0)
     {
      *x1=(-b-sqrt(delta))/(2*a);
      *x2=(-b+sqrt(delta))/(2*a);
      return 2;
     }
     else
      return 0;
   }
}

int main(int argc, char **argv)
{
  
  int a = 0, b = 0, c = 0, res;
  float x1,x2;
  
  saisie_coef(&a,&b,&c);
  res = resoudre2(a,b,c,&x1,&x2);
  if(res == -1)
   printf("Tout x est solution\n");
  else if(res == 0)
   printf("Pas de solutions\n");
  else if(res == 1)
   printf("L'equation admet une solution double x = %.3f\n",x1);
  else
   printf("L'equation admet deux solutions x1 = %.3f et x2 = %.3f\n",x1,x2);


  return 0;
}
