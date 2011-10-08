#include <stdio.h>
#include <stdlib.h>


void saisie(int *j,int *m)
{
  int ja = 0, ma = 0;
  
  while(1)
  {
    printf("Donner le jour et le mois correspondant :\n");
    scanf("%d %d",&ja,&ma);
    if(ja >31 || ja <0 || ma >12 || ma < 0)
      printf("Erreur de saisie\n");
    else
     {
        *j = ja;
        *m = ma;
        break;
     }
  }

}

void res(int j,int m)
{
  if((m>=6 && j> && m<=9)
   {
     

int main(int argc, char **argv)
{
   int j=0,m=0;
   saisie(&j,&m);
     
