#include <stdio.h>
#include <stdlib.h>






int main(int argc, char **argv)
{
  int n,i = 0;
  printf("Donner Un nombre n\n");
  scanf("%d",&n); 
  printf("%d est divisible ",n);
  if(n == 0)
   printf(" une infinité de fois\n");
  else
  {
    while(n%2==0)
    {
      i++;
      n /= 2;
    }

  printf("%d fois par 2\n",i);
  }
  return 0;
}
