  Les structures : 

*Definition : 
Une structure en langage C, est une variable composée de plusieurs champs, chaque champ possède un type de données indépendant des autres champs.

*Syntaxe : 
  struct [<nom de la structure>]   // le nom est optionnel.
   {
      type1 champ1;
      type2 champ2;
      .
      .
      typen champn;
   };

*Exemple:
  struct         // sans nom.  
  {
    int numInscription;
    char nom[50];
    char prenom[50];
    char dateNaissance[10];
    char classe[15];
  };


  // Avec nom:
  struct etudiant
  {
    int numInscription;
    char nom[50];
    char prenom[50];
    char dateNaissance[10];
    char classe[15];
  };


Dans un programme : 
#include <stdio.h>

main()
{
 struct etudiant
  {
    int numInscription;
    char nom[50];
    char prenom[50];
    char dateNaissance[10];
    char classe[15];
  };    // Définition de la structure.
     
  structure etudiant d1;  // Définition de la variable d1 de type structure.

}

/// Ou encore : 
#include <stdio.h>

main()
{
   struct
  {
    int numInscription;
    char nom[50];
    char prenom[50];
    char dateNaissance[10];
    char classe[15];
  } d1; //Définition de la structure et de la variable d1 de type structure   

}

// Le champ date de naissance peut lui même être une structure qui comporte 3 champs jour, mois, année.

struct dateNaissance
{
  int jour;
  int mois;
  int annee;
};

struct etudiant
  {
    int numInscription;
    char nom[50];
    char prenom[50];
    struct dateNaissance date1;
    char classe[15];
  };


*Accès à un champ d'une variable de type structure:
**Syntaxe:
  nomVariable.champ;

**Exemple:
  d1.numInscription = 5;
  d1.date1.jour = 25;
  d1.date1.mois = 4;
  d1.date1.annee = 1999;

*Exercice1 : 
 Ecrire un programme C qui lit à partir du clavier les données relatives à un étudiant.

*L'instruction "typedef"
 L'instruction "typedef" permet de définir un type de données utilisateurs et l'utiliser dans un programme C.
**Exemple:
  #include <stdio.h>

main()
{
typedef struct etudiant
  {
    int numInscription;
    char nom[50];
    char prenom[50];
    char dateNaissance[10];
    char classe[15];
  } etudiant_Esprit;   

}

*Les tableaux de structures:
**Syntaxe:
  type nomTab[taille];

**Exemple:
  struct etudiant tab[2300];
  //Ou bien:
  etudiant_Esprit tab[2300]; // Sachant qu'on a déjà définit le type etudiant_Esprit

*Exercice2:
 Ecrire un proramme C qui permet de lire les données relatives aux 2300 étudiants de l'école.
  
