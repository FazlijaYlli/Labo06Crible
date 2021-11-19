/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
Date creation  : 19.11.2021
Description    : Ce programme permets de trouver les nombres premiers dans un intervalle de 1 à
                 une certaine valeur rentrée par l'utilisateur. Après avoir lu la valeur souhaitée,
                 le programme mettra en marche un algorithme triant les chiffres à l'intérieur d'un tableau.
Remarque(s)    :
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "general.h"
#include "crible.h"

using namespace std;

int main() {
   // CONSTANTES LITTERALES
   constexpr int MIN          = 1;
   constexpr int MAX          = 500;
   constexpr int NB_COLONNES  = 10;
   const string MSG_ERREUR    = "Un probleme est survenu lors de la saisie.\n";
   const string MSG_BIENVENUE = "Bienvenue dans le Labo 06 - Crible !\nVeuillez entrer un chiffre dans l'intervalle ";

   // PROGRAMME
   afficher(MSG_BIENVENUE);
   cout << "[" << MIN << "," << MAX << "]" << endl;

   const int TAILLE = saisieIntervalle(MIN, MAX, MSG_ERREUR);
   int tableau_intervalle[TAILLE] = {};

   afficherTableau(tableau_intervalle, TAILLE, NB_COLONNES);



   cin.ignore();

   return EXIT_SUCCESS;
}
