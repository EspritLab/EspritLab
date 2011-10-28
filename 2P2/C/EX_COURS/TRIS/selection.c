#include <stdio.h>
#include <stdlib.h>


#define taille 10

int main(int argc, char **argv)
{
  
  int t[taille]={10,5,20,3,40,3,21,7,2,62};
  int i,j,aux,debut,min;

  debut = 0;
  for(i=0;i<taille;i++)
  {
        min=debut;
    for(j=debut;j<taille;j++)
       {
         if(t[j]<t[min])
           min=j;
       }
    aux = t[debut];
    t[debut] = t[min];
    t[min] = aux;
    //printf("debut %d\n",debut);
    debut++;
  }
  for(i=0;i<taille;i++)
    printf("%d|",t[i]);
  printf("\n");
  
  return 0;
}
    
