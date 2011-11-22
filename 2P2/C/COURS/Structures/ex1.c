#include <stdio.h>
#include <stdlib.h>




int main(int argc, char **argv)
{
	struct date
	{
		int jour;
		char mois[10];
		int annee;
	};
	
	struct etudiant
	{
		int numInscription;
		char nom[50];
		char prenom[50];
		struct date dateNaissance;
		char classe[50];
	};

	struct etudiant d1;
	printf("Donner le numéro d'inscriptio,\n");
	scanf("%d",&d1.numInscription);
	printf("Donner le nom\n");
	scanf("%s",d1.nom);
	printf("Donner le prenom\n");
	scanf("%s",d1.prenom);
	printf("Donner le jour de naissance\n");
	scanf("%d",&d1.dateNaissance.jour);
	printf("Donner le mois de naissance\n");
	scanf("%s",d1.dateNaissance.mois);
	printf("Donner l'année de naissance\n");
	scanf("%d",&d1.dateNaissance.annee);
	printf("Donner la classe\n");
	scanf("%s",d1.classe);
	return 0;

}
