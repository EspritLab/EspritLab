#include <stdio.h>



int main(int argc, char **argv)
{
  long i = 1, aux=1;
  int n,j;
  float x,s=1;
  
  do
   {
     printf("Donner une valeur comprise entre 1 et 30\n");
     scanf("%d",&n);
   }while(n<1 || n>30);
  
     printf("Donner un réel x\n");
     scanf("%f",&x);

  for(i=0;i<n;i++)
  {
    
      aux *= x/(i+1);  
    s += (float)aux;
  }
  
  printf("Pour x = %f et n = %d L'expression vaut : %f\n",x,n,s);

 return 0;
  
}
