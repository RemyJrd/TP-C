#include "functions.h"
#include "functions.c"

/*		 TP 3 - ESIEE-IT Rémy JARDIN 		*/


int main() {
int saisie, i;
int* Tab; 

	printf("Creation du Tableau. \nNombre de caractere du tableau : ");
	scanf("%d", &saisie);
	Tab = ArrayCreate(saisie);





// Affichage
printf("\n Resultats : ");
for (i = 0; i < saisie; i++) {
    printf("%d - ", *(Tab+i));
}

return 0;
}