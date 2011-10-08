/*Exercice 1:
 Ecrire un programme en C qui permet de permuter deux entiers saisis aux clavier */
#include <stdio.h>
#include <stdlib.h>

void permut(int *a, int *b)
{
  *a = *a+*b;
  *b = *a-*b;
  *a = *a-*b;
}
  


int main(int argc, char **argv)
{
  int a=0,b=0;
  printf("Donner deux valeurs a et b\n");
  scanf("%d %d",&a,&b);
  printf("a = %d , b = %d\n",a,b);
  permut(&a,&b);
  printf("Permutation !\n");
  printf("a = %d , b = %d\n",a,b);
  return 0;
}
  

/*int main(int argc, char **argv)
{
  
   int a = 0,b = 0;
   
   printf("Donner deux valeurs a et b \n");
  
   scanf("%d %d",&a,&b);
   printf("a = %d, b = %d\n",a,b);
   a = a+b;
   b = a-b;
   a = a-b;
   printf("Après la permutation : \n");
   printf("a = %d, b = %d\n",a,b);
   
   return 0;
}*/
   
/*AUTRE SOLUTION:
int main(int argc, char **argv)
{
  int a=0,b=0,aux=0;
   
  printf("Donner deux valeurs de a et b\n");
  scanf("%d %d",&a,&b);
   
  aux = a;
  a = b; 
  b = aux; 
 
  return 0;
}

*/   
