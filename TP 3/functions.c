#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int *ArrayCreate(int saisie) {
    int i;
    int *Tab = malloc( saisie * sizeof (*Tab));
    if (Tab==NULL) {
        printf("Not enough Memory");
        exit (1);
    }
    for (i = 0; i < saisie; i++) {
        Tab[i] = randomizer();
    }
    return Tab;
}


int randomizer() {
    return 1 + rand() % 100;
}


int insereAIndice(int* Tab, int index, int insertion, int taille) {
    Tab = realloc(Tab, taille * sizeof (*Tab));
    int i;
    for (i = taille-1; i >= index ; --i) {
        Tab[i] = Tab[i-1];
    }
    Tab[i] = insertion;
    return *Tab;
}


int supprimeAIndice(int* Tab, int index, int taille) {
    int i;
    for (i = index-1; i <= taille+1; i++) {
        printf("\n %d", Tab[i]);
        Tab[i] = Tab[i+1];
    }
    Tab = realloc(Tab, taille * sizeof (*Tab));
    return *Tab;
}


int Affichage(int* Tab, int max) {
    // Affichage
    int i;
	printf("\n Resultats : ");
	for (i = 0; i < max; i++) {
    	printf("%d - ", Tab[i]);
	}
    return *Tab;
}