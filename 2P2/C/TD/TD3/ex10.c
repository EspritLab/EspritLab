#include <stdio.h>
#include <stdlib.h>




int main(int argc, char **argv)
{
  int n = 0,s = 0,i = 0,j = 0;
   
  printf("Donner un nombre n \n");
  scanf("%d",&n);
  for(j=1;j<=n;j++)
  {
    s = 0;
    for(i = 1; i<(j/2)+1;i++)
    {
      if(j%i==0)
       s += i;
    }
    if(s==j)
    printf("%d est Parfait !\n",j);
  /* else
    printf("%d N'est pas parfait \n",j);*/
  }
  return 0;
} 
