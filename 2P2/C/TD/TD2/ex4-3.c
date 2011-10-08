#include <stdio.h>
#include <stdlib.h>

void permut(int *a,int *b)
{
   *a = *a+*b;
   *b = *a-*b;
   *a = *a-*b;
}


int main(int argc, char **argv)
{
  int a = 0, max = 0, min =0;
  
  printf("Donner 3 valeurs pour les comparer\n");
  scanf("%d %d",&max,&min);
  if(min>max)
     permut(&min,&max);
   scanf("%d",&a);
   if(a>max)
      permut(&a,&max);
   else if(a<min)
      permut(&a,&min);
   
   printf("%d>%d>%d \n",max,a,min);
   return 0;
}
   
  
  
