#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
   
   float t = 0.0;
   
   printf("Donner la tempérture de l'eau\n");
   scanf("%f",&t);
   
   if(t<0)
      printf("Glace\n");
   else if(t>100)
      printf("Vapeur\n");
   else
      printf("Liquide\n");

   return 0;
}
