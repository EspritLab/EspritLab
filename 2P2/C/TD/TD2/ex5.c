#include <stdio.h>
#include <stdlib.h>

unsigned int hms_to_s(unsigned int h,unsigned int m,unsigned int s)
{
  return h*3600+m*60+s;
}

void increment_s(unsigned int *h,unsigned int *m,unsigned int *s)
{
  unsigned int a = hms_to_s(*h,*m,*s)+1;
  *h = a/3600;
  *m = (a%3600)/60;
  *s = (a%3600)%60;
}

int main(int argc, char **argv)
{
  unsigned int h=0,m=0,s=0;
  printf("Donner l'heure actuelle sous la forme : h,m,s (avec h inclus dans [0,23]\n");
  scanf("%d %d %d",&h,&m,&s);
  if(h>23 || h<0 || m > 59 || m < 0 || s > 59 || s<0)
   printf("Erreur de saisie !\n");
  else
  {
   printf("%d:%d:%d+1\n",h,m,s);
   increment_s(&h,&m,&s);
   printf("%d:%d:%d\n",h,m,s);
  }
  return 0;
}
