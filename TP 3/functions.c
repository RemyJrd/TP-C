#include <stdio.h>
#include <stdlib.h>

int ArrayCreate(int saisie) {
int i;
int* Tab = malloc( saisie * sizeof (int));

for (i = 0; i < saisie; i++) {
    printf("Saisie du %d elements : ", i+1);
	scanf("%d", &Tab[i]);
}

printf("\n Resultats : ");
for (i = 0; i < saisie; i++) {
    printf("%d - ", *(Tab+i));
}

return Tab;
}

int randomizer() {
int rando;

    return rando;
}