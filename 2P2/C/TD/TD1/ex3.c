#include <stdio.h>
#include <sdlib.h>



int main(int argc, char **argv)
{
  int a,b,c;

  printf("Donner les valeurs de a,b et c\n");
  scanf("%d %d %d",&a,&b,&c);
  
  a = a+b+c;
  c = a-(b+c);
  b = a-(b+c);
  a = a-(b+c);
  
  return 0;
}
