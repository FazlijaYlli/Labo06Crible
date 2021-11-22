/*
-------------------------------------------------------------------------------------
Nom du fichier : crible.cpp
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
Date creation  : 19.11.2021
Description    : Définitions des fonctions spécifiques à la méthode du crible
                 d’Eratosthène.
Remarque(s)    : /
Compilateur    : Mingw-w64 g++ 11.1.0
-------------------------------------------------------------------------------------
*/

#include <iostream>

using namespace std;

void cribleEratosthene(int tableau[], int taille) {

   // Remplissage du tableau par des valeurs de 1 à taille
   for(int i = 0; i < taille; ++i ) {
      tableau[i] = i + 1;
   }

   // Première boucle itérant sur le tableau.
   for(int i = 0; i < taille; ++i) {
      if (tableau[i] == 0) {
         continue;
      } else if (tableau[i] == 1) {
         tableau[i] = 0;
      } else {
         // boucle permettant de remplacer tous les multiples de tableau[i] par 0
         for (int j = 0; j < taille; ++j) {
            if (tableau[i] != tableau[j] && tableau[j] % tableau[i] == 0) {
               tableau[j] = 0;
            }
         }
      }
   }
}

void afficherTableauEratosthene(int tableau[], int taille, int nb_colonnes, char
nb_premier, char autre) {
   for(int i = 0; i < taille; ++i) {
      if (tableau[i] == 0) {
         cout << autre << ' ';
      } else {
         cout << nb_premier << ' ';
      }

      // on ajoute un retour à la ligne à l'élément correspondant au nombre de colonnes
      // (e.g. à chaque dizaine d'éléments)
      // Par contre, il n'est pas ajouté lors de l'écriture du dernier élément.
      if (i != taille - 1 && (i + 1) % nb_colonnes == 0) {
         cout << endl;
      }
   }
   cout << endl << endl;
}

void afficherListeNombresPremiers(int tableau[], int taille) {
   for(int i = 0; i < taille; ++i) {
      if (tableau[i] != 0) {
         cout << tableau[i] << ' ';
      }
   }
}

unsigned compteurNombresPremiers(int tableau[], int taille) {
   unsigned compteur = 0;
   for(int i = 0; i < taille; ++i) {
      if (tableau[i] != 0) {
         ++compteur;
      }
   }
   return compteur;
}