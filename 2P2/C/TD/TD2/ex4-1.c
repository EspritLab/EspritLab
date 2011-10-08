#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
   int a = 0, b = 0;
   
   printf("Donner deux entier pour les comparer\n");
   scanf("%d %d",&a,&b);
   if(a>b)
    printf("Le max est %d et le min est %d\n",a,b);
   else if (b>a)
    printf("Le max est %d et le min est %d\n",b,a);
   else
    printf("Egalitée !\n");
   
   return 0;
}
   
   
