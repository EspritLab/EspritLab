#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
   int a=0,b=0,c=0,d=0,e=0;
    
   printf("Donner 4 valeur pour faire leur sommes\n");
   scanf("%d %d %d %d",&a,&b,&c,&d);
   e = a + b + c + d;
   printf("%d + %d + %d + %d = %d\n",a,b,c,d,e);
   
   return 0;
}
