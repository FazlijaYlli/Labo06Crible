/*
-------------------------------------------------------------------------------------
Nom du fichier : crible.cpp
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
 					  Mota Carneiro Rui Manuel
 					  Bloch Aurélien
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

/*
 * Commentaire du 25.11.2021 par le Groupe Aurélien Bloch - Mota Carneiro Rui Manuel
 *
 * Nous avons remarqué que cette fonction n'était pas très réutilisable, mais en
 * allant dans le sens du labo, nous avons décidé de simplement modifier celle-ci
 * (malgré l'affichage conditionnel des valeurs) plutôt que d'en créer une nouvelle,
 * plus réutilisable mais qui y ressemblerait beaucoup.
 */
void afficherListeNombresPremiers(int tableau[],
                                  size_t taille,
                                  const string& separateur,
                                  const string& debut,
                                  const string& fin) {
   cout << debut;
   for(size_t i = 0; i < taille; ++i) {
      if (tableau[i] != 0) {
         if (i > 0) {
            cout << separateur;
         }
         cout << tableau[i];
      }
   }
   cout << fin;
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