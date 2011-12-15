 #include<stdio.h>
 #include<stdlib.h>
 typedef struct
 {
    int num_inscrip;
	char nom[50];
	char prenom[50];
	char date_naissance[50];
	char classe[10];
  } etudiant;

int main()
 {
    etudiant p;
	etudiant *e;
	e = &p;
	printf("Donner le numero d'inscription\n");
	scanf("%d",&p.num_inscrip);
	scanf("%s",p.nom);
	scanf("%s",p.prenom);
	scanf("%s",p.date_naissance);
	scanf("%s",p.classe);
  

    printf("%d %s %s %s %s\n", e->num_inscrip, e->nom, e->prenom, e->date_naissance, e->classe);
    return 0;
}
