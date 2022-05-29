#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <time.h>


GRILLE* newGrille(int L, int C) {
    GRILLE* g = malloc (sizeof (GRILLE));
    g->L = L;
    g->C = C;

    if (g == NULL) {
        printf("Not Enough Memory !\n");
        exit(1);
       }
    int *TabL = malloc( L * sizeof (*TabL));
        if (TabL == NULL) {
            printf("Not Enough Memory !\n");
            exit(1);
       }
       g->TabL = TabL;
    int *TabC = malloc( C * sizeof (*TabC));
        if (TabC == NULL) {
            printf("Not Enough Memory !\n");
            exit(1);
       }
       g->TabC = TabC;
    return g;
}


GRILLE initGrille(GRILLE* g) {
    int i, y;
    for (i = 1; i <= g->C; i++) {
        for (y = 1; y < g->L; y++) {
            g->TabL[y] = randomizer();
        }
            g->TabC[i] = randomizer();
    }
    return *g;
}


GRILLE afficheGrille(GRILLE* g) {
    int i, y;
    for (i = 1; i <= g->C; i++) {
        for (y = 1; y < g->L; y++) {
            printf("- %d ", g->TabL[y]);
        }
            printf(" %d - ", g->TabC[i]);
            printf("\n");
    }
    return *g;
}


int randomizer() {
    return rand() % 2;
}