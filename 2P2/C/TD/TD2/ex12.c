#include <stdio.h>
#include <stdlib.h>


void saisie(int *a,int *m,int *j)
{
  while(1)
  {
    printf("Donner 3 entier représentant la date sous la forme A M J\n");
    scanf("%d %d %d",a,m,j);
    if(*a < 0 || *m < 1 || *m > 12 || *j > 31 || *j < 1)
     printf("Erreur de saisie\n");
    else
     break;
  }
}
int bissextile(int a)
{
   if((a%4 == 0 && a%100 != 0) || (a%400 ==0))
     return 1;
   else
     return 0;
}
int ok(int a,int m,int j)
{
  if(m!=2 && m>=1 && m<=7)
    {
      if(m%2==0)
       {
         if(j<=30)
          return 0;
         else
          return 1;
       }
      else
      {
         if(j<=31)
          return 0;
         else
          return 1;
      }
    }
   else if(m!=2 && m>=8 && m<=12)
    {
        if(m%2==0)
         { 
          if(j<=31)
            return 0;
          else
            return 1;
         }
        else
         {
           if(j<=30)
             return 0;
           else
             return 1;
         }
    }
   else
    {
         if(bissextile(a))
          {
            if(j<=29)
              return 0;
            else
              return 1;
          }
         else
          {
            if(j<=28)
              return 0;
            else
              return 1;
          }
   }
}

int main(int argc,char **argv)
{
  unsigned int a,m,j;
  saisie(&a,&m,&j);
  printf("%d %d %d\n",a,m,j);
  if(!ok(a,m,j))
     printf("Correcte :)\n");
  else
     printf("Incorrecte !\n");

  return 0;
} 
