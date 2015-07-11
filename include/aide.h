#ifndef AIDE_H
#define AIDE_H

#include "include_utilitaire.h"

/*******************************************************************************************************************/
/*--------------------------------------------------*/
/*        Fonction de Lecture et ecriture           */
/*--------------------------------------------------*/
//lecture d'une chaine de caractere dans un fichier
char* lecture_dynamique_char(FILE * fichier);
//lecture d'un entier dans un fichier
int lecture_entier(FILE * fichier);

//saisir une chaine de caractere avec espace (convertion espace et apostrophe en "_")
char* saisie_dynamique_char();
int saisie_entier();

//doner position du pointeur dans le fichier
void position_fichier(FILE *fichier);
/*--------------------------------------------------*/

/*--------------------------------------------------*/
/*       Fonction pour faciliter le codage          */
/*--------------------------------------------------*/

void saut_ligne(int i);
int longueur_entier(int i);
int puissance_10(int j);
double fonctionabsolue(double nombre);
int fonctionabsolue(int nombre);
/*--------------------------------------------------*/

/*--------------------------------------------------*/
/*           fonction mathematique                  */
/*--------------------------------------------------*/
double racine_carre(double nombre);
double cosinus(double x);
double modulo(double x, double diviseur);
double exponentiel(double entre);
/*--------------------------------------------------*/

char* convertir_entier_chaine(int entrer);

#endif // AIDE_H
