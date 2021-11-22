/*
-------------------------------------------------------------------------------------
Nom du fichier : general.cpp
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
Date creation  : 19.11.2021
Description    : Définitions des fonctions générales déclarées dans general.h.
Remarque(s)    : Les fonctions ci-dessous ont un usage général et sont orientées
                 vers la réutilisabilité.
Compilateur    : Mingw-w64 g++ 11.1.0
-------------------------------------------------------------------------------------
*/

#include <iostream>  // I/O
#include <string>    // Afin d'utiliser un paramètre string.
#include <limits>    // Permets de vider le buffer.
#include "general.h" // Lien au fichier d'en-tête.

using namespace std;

int saisieIntervalle(int MIN, int MAX, const string& MSG_ERREUR) {
   int entree;
   // Boucle de saisie
   do {
      // Vérifier si on doit déclencher une erreur
      if(!(cin >> entree) || (entree < MIN || entree > MAX)) {
         cin.clear();
         cout << MSG_ERREUR;
      }
      // Vider le buffer
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
   } while (entree < MIN || entree > MAX);
   return entree;
}
