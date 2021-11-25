/*
-------------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
                 Fazlija Ylli
 				     Mota Carneiro Rui Manuel
 				     Bloch Aurélien
Date creation  : 19.11.2021
Description    : Ce programme a pour but de trouver tous les nombres premiers
                 contenus dans un intervalle donné en appliquant la méthode du
                 crible d’Eratosthène. La borne inférieure de l'intervalle est 1
                 et la borne supérieure est entrée par l'utilisateur. Deux
                 tableaux sont affichés à l'utilisateur: le premier est un tableau
                 rempli de zéros symbolisants chaque nombre de l'intervalle. Le
                 deuxième est constitué de croix qui représentent les nombres
                 non-premiers et les zéros restants correspondent aux nombres
                 premiers. Pour finir, la liste des nombres premiers et le nombre
                 de nombre premiers sont affichés à l'écran.
Remarque(s)    : Complement : À la suite du programme est affiché un tableau
                              de nombres premiers calculé à partir d'un tableau
                              booléen constant.
Compilateur    : Mingw-w64 g++ 11.1.0
-------------------------------------------------------------------------------------
*/

#include <iostream>  // Input / Output de base.
#include <string>    // Stockage des messages dans des constantes.
#include <cstdlib>   // EXIT_SUCCESS;
#include <limits>    // numeric_limits
#include "general.h" // saisieIntervalle()
#include "crible.h"  // cribleEratosthene(), afficherTableauEratosthene(),
                     // afficherListesNombresPremiers()

using namespace std;

/// Fonction qui permet de remplir un tableau d'entiers à l'aide d'un tableau de bool
/// \param tableauBool   tableau de bool criblé
/// \param taille        taille du tableau de bool
/// \param tableauEntier tableau d'entiers pour contenir les valeurs
/// \param capacite      taille du tableau d'entiers
/// \return
size_t convertirTableauBoolEnEntier(const bool tableauBool[], size_t taille,
                                 unsigned tableauEntier[], size_t capacite);

int main() {
   //--------------------------------------------------------------------------------
   // Constantes
   //--------------------------------------------------------------------------------
   constexpr int MIN          = 1;     // Minimum de l'intervalle du tableau.
   constexpr int MAX          = 100;   // Maximum de l'intervalle du tableau.
   constexpr int NB_COLONNES  = 10;
   const string MSG_BIENVENUE = "Bienvenue dans le Labo 06 - Crible !";
   const string MSG_INVITE    = "> Veuillez entrer un nombre dans l'intervalle ";
   const string MSG_ERREUR    = "> Erreur d'entree, veuillez reessayer : ";
   const string MSG_COMPLEMENT= "complement...";
   const string DEBUT_TABLEAU = "[";
   const string SEPARATEUR    = ", ";
   const string FIN_TABLEAU   = "]";
   const string MSG_QUITTER   = "Presser ENTER pour quitter ";

   //--------------------------------------------------------------------------------
   // Message de bienvenue
   //--------------------------------------------------------------------------------
   cout << "====================================" << endl;
   cout << MSG_BIENVENUE << endl;
   cout << "====================================" << endl << endl;

   //--------------------------------------------------------------------------------
   // Saisie de l'utilisateur
   //--------------------------------------------------------------------------------
   cout << MSG_INVITE << "[" << MIN << ", " << MAX << "] : ";
   const int TAILLE = saisieIntervalle(MIN, MAX, MSG_ERREUR);

   //--------------------------------------------------------------------------------
   // Méthode du crible d'Eratosthène
   //--------------------------------------------------------------------------------
   int tableau_intervalle[TAILLE];

   cribleEratosthene(tableau_intervalle, TAILLE);

   //--------------------------------------------------------------------------------
   // Affichage à l'utilisateur
   //--------------------------------------------------------------------------------
   cout << endl << "Initialisation du tableau" << endl;
   afficherTableauEratosthene(tableau_intervalle, TAILLE, NB_COLONNES, '0', '0');

   cout << "Criblage du tableau" << endl;
   afficherTableauEratosthene(tableau_intervalle, TAILLE, NB_COLONNES, '0', 'X');

   cout << "Il y a " << compteurNombresPremiers(tableau_intervalle, TAILLE)
        << " nombre(s) premier(s) :" << endl;

   afficherListeNombresPremiers(tableau_intervalle, TAILLE);

   //====================================================================
   // 2ème partie - Reprise du labo et ajout de nouvelles fonctionnalités
   //====================================================================

   cout << endl << endl << MSG_COMPLEMENT << endl;

   //--------------------------------------------------------------------------------
   // Complément
   //--------------------------------------------------------------------------------
   // tableau de 1 à 100, O représente les nbres 1er
   const bool O = true;
   const bool X = false;
   const bool CRIBLE_INITIAL[] = {X, O, O, X, O, X, O, X, X, X,
                                  O, X, O, X, X, X, O, X, O, X,
                                  X, X, O, X, X, X, X, X, O, X,
                                  O, X, X, X, X, X, O, X, X, X,
                                  O, X, O, X, X, X, O, X, X, X,
                                  X, X, O, X, X, X, X, X, O, X,
                                  O, X, X, X, X, X, O, X, X, X,
                                  O, X, O, X, X, X, X, X, O, X,
                                  X, X, O, X, X, X, X, X, O, X,
                                  X, X, X, X, X, X, O, X, X, X};
   const size_t TAILLE_INITIAL = sizeof(CRIBLE_INITIAL) / sizeof(bool);
   // tableau de nbre 1er
   const size_t CAPACITE = 100; // réservation
   size_t tailleNbre1er; // taille
   unsigned tab1er[CAPACITE]; // tableau de nbres 1er
   tailleNbre1er = convertirTableauBoolEnEntier(CRIBLE_INITIAL, TAILLE_INITIAL,
                           tab1er, CAPACITE);
   afficherListeNombresPremiers((int*)tab1er, tailleNbre1er, SEPARATEUR,
                                DEBUT_TABLEAU, FIN_TABLEAU);

   //--------------------------------------------------------------------------------
   // Fin du programme
   //--------------------------------------------------------------------------------
   cout << endl << endl << MSG_QUITTER;
   cin.ignore(numeric_limits<streamsize>::max(),'\n');

   return EXIT_SUCCESS;
}

size_t convertirTableauBoolEnEntier(const bool tableauBool[], size_t taille,
                               unsigned tableauEntier[], size_t capacite) {
   size_t nouvelleTaille = 0;
   if (taille <= capacite) {
      for (size_t i = 0; i < taille; ++i) {
         if (tableauBool[i]) {
            tableauEntier[nouvelleTaille] = (unsigned)i + 1u;
            ++nouvelleTaille;
         }
      }
   }
   else {
      cerr << "\nErreur : Tableau de bool trop grand.\n";
   }
   return nouvelleTaille;
}