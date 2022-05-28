#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

int *ArrayCreate(int saisie);
int randomizer(void);
int insereAIndice(int* Tab, int index, int insertion, int taille);
int supprimeAIndice(int* Tab, int index, int taille);
int Affichage(int* Tab, int max);

#endif