#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "fonctions.h"  //on inclut la librairie
#include "fonctions.c"

typedef struct{
    int hauteur;
    int largeur;
    char** grille;
}Grid;

void show_grid(char** grille,int lareur,int hauteur);

int main(int argc, char* argv[]) {
logo();
char choice;

    do {
        printf("Bienvenue sur le jeux Puissance N !\nNouvelle partie: N\nCharger une sauvegarde: S\nQuitter: Q\n");
        scanf("%c",&choice);

        choice=toupper(choice);

        switch (choice) {
            case 'N':
                //appelfonctionnouvelle partie
                printf("Nouvelle partie");
                action();
                break;
            case 'S':
                //appelfonction charger sauvegarde
                printf("Chargement en cours");
                action();
                break;
            case 'Q':
                //quitter
                printf("bye");
                break;
            default:
        ;
        }
            vider_buffer(); //permet de liberer le charactère dans choice

        } while (choice!='S'&& choice!='N'&& choice!='Q');

printf(" ____                                                          \n|    |                                                |       |\n|____|                                                | |     |\n|         .   ___    ___   ___    ___    ___   ___    |   |   |\n|  |   |  |  |___   |___  |___|  |   |  |     |___    |     | |\n|  |___|  |   ___|   ___| |   |  |   |  |___  |___    |       |\n");
    int N;
    Grid g1;
    printf("entrer la valeur de N+2:\n");
    scanf("%d",&N);
    g1.largeur = N;
    g1.hauteur = N;

    g1.grille = (char**) malloc(sizeof (char*)*g1.largeur);
    for (int i=0;i<g1.largeur;i++){
        g1.grille[i]=(char*) malloc(sizeof (char)*g1.hauteur);
        for (int j=0;j<g1.hauteur;j++){
            g1.grille[i][j]='_';
        }
    }

    show_grid(g1.grille,g1.largeur,g1.hauteur);


return EXIT_SUCCESS;
}

void show_grid(char** grille,int largeur, int hauteur){
    for (int i=0;i<largeur;i++){
        for (int j=0;j<hauteur;j++){
            printf("{%c}\n",grille[i][j]);
        }
    }
}//fonction show grid a changer car le printf ne renvoie pas sur forme d'un tableau
