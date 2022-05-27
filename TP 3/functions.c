#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int ArrayCreate(int saisie) {
int i;
int *Tab = malloc( saisie * sizeof (*Tab));
if (Tab==NULL) {
    printf("Not enough Memory");
    exit (1);
}
for (i = 0; i < saisie; i++) {
Tab[i] = randomizer();
}

printf("\n Resultats : ");
for (i = 0; i < saisie; i++) {
    printf("%d - ", Tab[i]);
}

return 0;
}


int randomizer() {
return 1 + rand() % 100;
}