/*
-------------------------------------------------------------------------------------
Nom du fichier : crible.h
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
 					  Mota Carneiro Rui Manuel
 					  Bloch Aurélien
Date creation  : 19.11.2021
Description    : Prototypes des fonctions spécifiques à la méthode du crible
                 d’Eratosthène.
Remarque(s)    : /
Compilateur    : Mingw-w64 g++ 11.1.0
-------------------------------------------------------------------------------------
*/

#ifndef LABO06CRIBLE_CRIBLE_H
#define LABO06CRIBLE_CRIBLE_H

#include <string>

//-----------------------------------------------------------------------------------
// Fonction cribleEratosthene
//-----------------------------------------------------------------------------------
// But        remplacer tous les nombres non-premiers par des 0.
// @param     tableau  tableau d'entiers.
// @param     taille   taille du tableau fourni.
// Return     n/a
// Exception  n/a
void cribleEratosthene(int tableau[], int taille);

//-----------------------------------------------------------------------------------
// Fonction afficherTableauEratosthene
//-----------------------------------------------------------------------------------
// But        afficher le tableau en remplacant les nombres premiers et
//            non-premiers par des caractères donnés.
// @param     tableau      tableau contenant les nombres premiers et des zéros
//                         à la place des nombres non-premiers.
// @param     taille       taille du tableau fourni.
// @param     nb_colonnes  nombre de colonnes sur lesquelles afficher le tableau.
// @param     nb_premier   caractère à afficher à la place de chaque nombre
//                         premier du tableau.
// @param     autre        caractère à afficher à la place de chaque nombre
//                         non-premier (0) du tableau.
// Return     n/a
// Exception  n/a
void afficherTableauEratosthene(int tableau[], int taille, int nb_colonnes, char
nb_premier, char autre);

//-----------------------------------------------------------------------------------
// Fonction afficherListeNombresPremiers
//-----------------------------------------------------------------------------------
// But        afficher tous les nombres premiers du tableau.
// @param     tableau  tableau d'entiers.
// @param     taille   taille du tableau fourni.
// @param     separation   (Optionnel) Chaîne de caractères à afficher entre chaque élément
// @param     debut        (Optionnel) Chaîne de caractères à afficher au début de la liste
// @param     fin          (Optionnel) Chaîne de caractères à afficher à la fin de la liste
// Return     n/a
// Exception  n/a
void afficherListeNombresPremiers(int tableau[], size_t taille,
                            const std::string& separateur = " ",
                            const std::string& debut = "", const std::string& fin = "");

//-----------------------------------------------------------------------------------
// Fonction compteurNombresPremiers
//-----------------------------------------------------------------------------------
// But        compter le nombre de nombres premiers présents de le tableau
// @param     tableau  tableau d'entiers.
// @param     taille   taille du tableau fourni.
// Return     le nombre de nombres premiers
// Exception  n/a
unsigned compteurNombresPremiers(int tableau[], int taille);

#endif //LABO06CRIBLE_CRIBLE_H
