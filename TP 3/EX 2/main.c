#include "functions.h"
#include "functions.c"
#include <time.h>

int main() {
    int L, C;
    GRILLE* g;
    srand(time(0));

    printf("Nombres de Lignes : ");
    scanf("%d", &L);
    printf("Nombres de Colonnes : ");
    scanf("%d", &C);

    g = newGrille(L, C);

    initGrille(g);

    printf("--------- Resultats Obtenus -----------\n");
    afficheGrille(g);

    return 0;
}