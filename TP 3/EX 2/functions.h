#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int L;
    int C;
    int* TabL;
    int* TabC;
} GRILLE;

GRILLE* newGrille(int L, int C);
GRILLE initGrille();
GRILLE afficheGrille(GRILLE* g);
int randomizer(void);


#endif