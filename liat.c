#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define taille 1000

void openFile (FILE **fichier, char *test)
{
    *fichier = fopen(test,"r+");
    if (fichier==NULL)
        {
            printf("Impossible d'ouvrir le fichier text.txt!\nIl y a une erreur!!");
            exit(1);
        }
}
int cast (char *argument)
{
    int n;
    n=atoi (argument);
    return n;
}
int compt (FILE *fichier, char *nomFichier, int n)
{
    int nbLine=1;
    while (feof(fichier)!=1)
        {
           fgets (nomFichier, taille, fichier);
           nbLine++;
        }
    nbLine=nbLine-n;
    fclose(fichier);
    return nbLine;
}
void tial (FILE *fichier, int nbLine, char *nomFichier)
{
    int compteur=1;
    while (feof(fichier)!=1)
        {
            fgets (nomFichier, taille, fichier);
            compteur++;
            if (compteur > nbLine)
                {
                    printf("%s", nomFichier);
                }
        }
    fclose(fichier);
}
void verbose (FILE *fichier, char *option, char *nomFichier)
{
    char test[2]= "-v";
    if (strcmp(test,option)==0)
        {
            printf("==> %s <==\n", nomFichier);
        }
}
