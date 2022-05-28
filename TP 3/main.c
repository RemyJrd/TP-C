#include "functions.h"
#include "functions.c"

/*		 TP 3 - ESIEE-IT Rémy JARDIN 		*/

int main() {
	int saisie, index, insertion, taille;


	// Création du tableau avec des valeurs aléatoires.
	printf("Creation du Tableau. \nNombre de caractere du tableau : ");
	scanf("%d", &saisie);

	int *Tab = ArrayCreate(saisie);

	printf("Voici le tableau nouvellement creer : ");
	Affichage(Tab, saisie);


	// Insertion d'une valeur 'insertion' à l'index 'index'. Avec décallage.
	taille = saisie + 1;

	printf("\n\n ! Mode Insertion ! \nNouvel Endroit souhaiter a partir de 0 : ");
	scanf("%d", &index);

	printf("Nouvelle valeur souhaiter : ");
	scanf("%d", &insertion);

	insereAIndice(Tab, index, insertion, taille);
	Affichage(Tab, taille);


	// suppresion d'une valeur à l'index 'index'. Avec décallage.
	taille = taille - 1;

	printf("\n! Mode suppresion ! \n Je fonctionne !\n Attention a la lecture, je prend le tableau nouvellement insere avec insereAIndice\nEndroit a supprimer a partir de 0 : ");
	scanf("%d", &index);

	supprimeAIndice(Tab, index, taille);
	Affichage(Tab, taille);
 

	printf("\nRésultats final : \n");
	Affichage(Tab, taille);
	free(Tab);
	return 0;
}