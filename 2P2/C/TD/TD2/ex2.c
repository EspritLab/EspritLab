#include <stdio.h>



int main(int argc, char **argv)
{
   int a=0,b=0;

   printf("Doner deux valeur pour la division a/b\n");
   scanf("%d %d",&a,&b);
   
   if(b!=0)
   {
       if(a%b == 0)
        printf("%d est divisible par %d\n",a,b);
       else
        printf("%d n'est pas divisible par %d\n",a,b);
   }
   else 
     printf("Division par zéro impossible\n");
  
   return 0;
}
