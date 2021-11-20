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

#include <iostream>
#include <string>
#include <limits>
#include "general.h"

using namespace std;

int saisie(const string& MSG_ERREUR) {
   int entree;
   if(!(cin >> entree)) {
      cin.clear();
      cout << MSG_ERREUR;
   }
   cin.ignore(numeric_limits<streamsize>::max(),'\n');
   return entree;
}

int saisieIntervalle(int MIN, int MAX, const string& MSG_ERREUR) {
   int entree;
   do {
      entree = saisie(MSG_ERREUR);
   } while (entree < MIN || entree > MAX);
   return entree;
}
