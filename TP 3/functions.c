#include <stdio.h>
#include <stdlib.h>

int ArrayCreate(int saisie) {
int i;
int* Tab = malloc( saisie * sizeof (int));

for (i = 0; i < saisie; i++) {

    *(Tab+i) = randomizer;
     printf("\n Resultats : ");
for (i = 0; i < saisie; i++) {
    printf("%d - ", *(Tab+i));
}
}


return Tab;
}

int randomizer() {
srand ( time(NULL) );
int random_number = rand() % 100;
  
  return random_number;
}