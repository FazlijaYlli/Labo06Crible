/*
-----------------------------------------------------------------------------------
Nom du fichier : general.cpp
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
Date creation  : 19.11.2021
Description    : Définitions des fonctions déclarées dans general.h.
                 Les fonctions se trouvant ici ont un usage générale et sont
                 plus particulièrement orientées vers la réutilisabilité.
Remarque(s)    :
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include <limits>
#include "general.h"

using namespace std;

int saisie(const std::string& MSG_ERREUR) {
   int entree;
   if(!(cin >> entree)) {
      cin.clear();
      afficher(MSG_ERREUR);
   }
   cin.ignore(numeric_limits<streamsize>::max(),'\n');
   return entree;
}

int saisieIntervalle(int MIN, int MAX, const std::string& MSG_ERREUR) {
   int entree;
   do {
      entree = saisie(MSG_ERREUR);
   } while (entree <= MIN || entree >= MAX);
   return entree;
}

void afficher(const std::string& MSG) {
   cout << MSG;
}

void afficherTableau(int tableau[], int taille_tableau, int nombre_colonnes) {
   for(int i = 0 ; i < taille_tableau ; ++i) {
      if (i % nombre_colonnes == 0) {
         cout << endl;
      } else {
         cout << tableau[i] << " ";
      }
   }
}