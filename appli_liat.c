#include <stdio.h>
#include <stdlib.h>
#include "prototype5.h"
#define taille 1000

    int main(int argc, char *argv[]){
    FILE *fichier=NULL;    
    char nomFichier[taille];
    int n;
    int nbLine;
    verbose (fichier, argv[1], argv[3]);
    openFile (&fichier, argv[3]);
    n=cast(argv[2]);
    nbLine = compt (fichier, nomFichier, n);
    openFile (&fichier, argv[3]);
    tial (fichier,nbLine, nomFichier );

    return 0;
}
