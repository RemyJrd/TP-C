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

int insereAIndice() {

    return 0;
}