#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
   float a= 0.001,b=0.003;
   float c, *pa,*pb;
   pa = &a;
   *pa *= 2;
   pb = &b;
   c = 3*(*pb-*pa);
   printf("%f %f %f\n",a,b,c);

   return 0;
}
