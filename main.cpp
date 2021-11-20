/*
-------------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
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
Remarque(s)    : /
Compilateur    : Mingw-w64 g++ 11.1.0
-------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "general.h" // saisie(), saisieIntervalle()
#include "crible.h"  // triEratosthene(), afficherTableauEratosthene(),
                     // afficherListesNombresPremiers()

using namespace std;

int main() {
   //--------------------------------------------------------------------------------
   // Constantes
   //--------------------------------------------------------------------------------
   constexpr int MIN          = 1;
   constexpr int MAX          = 500;
   constexpr int NB_COLONNES  = 10;
   const string MSG_BIENVENUE = "Bienvenue dans le Labo 06 - Crible !";
   const string MSG_INVITE    = "> Veuillez entrer un nombre dans l'intervalle ";
   const string MSG_ERREUR    = "Veuillez saisir un nombre entier";
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

   triEratosthene(tableau_intervalle, TAILLE);

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

   //--------------------------------------------------------------------------------
   // Fin du programme
   //--------------------------------------------------------------------------------
   cout << endl << endl << MSG_QUITTER;
   cin.ignore(numeric_limits<streamsize>::max(),'\n');

   return EXIT_SUCCESS;
}
