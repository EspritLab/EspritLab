#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char **argv)
{
	struct date
	{
		int jour;
		char mois[10];
		int annee;
	};
	
	typedef struct etudiant
	{
		int numInscription;
		char nom[50];
		char prenom[50];
		struct date dateNaissance;
		char classe[50];
	} Etudiant_Esprit;

	Etudiant_Esprit t[2300];
        Etudiant_Esprit aux;
        int i,j;
        int n;
        do
        {
           printf("Donner le nombre d'étudiants\n");
	   scanf("%d",&n);
	}while(n>2300 || n< 1);

        for(i=0;i<n;i++)
        {
         printf("Donner le num d'inscription\n");
	scanf("%d",&t[i].numInscription);
        printf("Les données relatives à l'étudiant num %d\n",i);
	printf("Donner le nom\n");
	scanf("%s",t[i].nom);
	printf("Donner le prenom\n");
	scanf("%s",t[i].prenom);
	printf("Donner le jour de naissance\n");
	scanf("%d",&t[i].dateNaissance.jour);
	printf("Donner le mois de naissance\n");
	scanf("%s",t[i].dateNaissance.mois);
	printf("Donner l'année de naissance\n");
	scanf("%d",&t[i].dateNaissance.annee);
	printf("Donner la classe\n");
	scanf("%s",t[i].classe);
        }
        for(i=0;i<n;i++)
        {
	   for(j=0;j<n-i-1;j++)
	   {
	      if(t[j].numInscription>t[j+1].numInscription)
	        {
		  aux = t[j];
	  	  t[j] = t[j+1];
		  t[j] = aux;
		}
	   }
	}
        printf("ID  Nom  Prenom  Date de naissance  Classe\n");
        for(i=0;i<n;i++)
        {
            if(!strcmp(t[i].classe,"2P2"))
	     printf("%d   %s   %s   %d/%s/%d   %s\n",t[i].numInscription,t[i].nom,t[i].prenom,t[i].dateNaissance.jour,t[i].dateNaissance.mois,t[i].dateNaissance.annee,t[i].classe);
        }
 
      
	return 0;

}
