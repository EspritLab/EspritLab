#include <stdio.h>
#include <stdlib.h>





int main(int argc, char **argv)
{
   int a = 0,b = 0;
   
   printf("Donner les coefficient de l'equation a*x+b=0\n");
   scanf("%d %d",&a,&b);
   
   if(a!=0)
    printf("La solution à l'équation est x = %0.2f\n",(float)(-b)/a);
   else if( a == 0 && b == 0)
    printf("Tout x est solution de l'equation\n");
   else 
    printf("a = 0, ce n'est pas une equation premier degré\n");
  
  return 0;
}
