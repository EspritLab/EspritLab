#include <stdio.h>
#include <stdlib.h>




int main(int argc, char **argv)
{
  int a = 0,b = 0;
  char o = ' ';
  
  printf("Donner l'opérateur arithmétique suivit de deux entiers.\n");
  printf("sous cette forme : [op] [a] [b] \n");
  scanf("%c %d %d",&o,&a,&b);
  switch (o)
  {
   case '+':
     printf("%d + %d = %d\n",a,b,a+b); 
     break;
   case '-':
     printf("%d - %d = %d\n",a,b,a-b);
     break;
   case '/':
     if(b!=0)
       printf("%d / %d = %d\n",a,b,(float)(a/b));
     else
       printf("Division par zéro est impossible\n");
     break;
   case '*':
     printf("%d * %d = %d\n",a,b,a*b);
     break;
   case '%':
     if(b!=0)
      printf("%d %% %d = %d\n",a,b,a%b);
     else
      printf("ERREUR: division par zéro impossible\n");

     break;
   default : 
     printf("ERREUR: '%c' n'est pas un opérateur arithmétique.\n",o);
   }

  return 0;
}
  
