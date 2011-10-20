#include <stdio.h>
#include <stdlib.h>





int main(int argc, char **argv)
{
  int i,j=0,a;
  int t[20];
  
  printf("Remplissage du tableau\n");
  for(i=0;i<20;i++)
    scanf("%d",&t[i]);
  printf("Donner une valeur pour chercher son occurence\n");
  scanf("%d",&a);
  for(i=0,j=0;i<20;i++)
    {
       if(t[i]==a)
        j++;
    }

  printf("%d existe %d fois dans le tableau\n",a,j);

  return 0;
}
  
  
