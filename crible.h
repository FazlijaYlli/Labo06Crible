/*
-----------------------------------------------------------------------------------
Nom du fichier : crible.h
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
Date creation  : 19.11.2021
Description    : Déclarations de fonctions spécifiques à l'utilsation du jeu.
                 L'algorithme et les fonctions d'affichage des résultats se trouvent ici.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO06CRIBLE_CRIBLE_H
#define LABO06CRIBLE_CRIBLE_H

/**
 * Algorithme qui remplacera tous les chiffres non-premiers dans un tableau d'entiers par des 0.
 * @param tableau Tableau contenant les valeurs. Attention, son contenu sera effacé et remplacé
 *                par des chiffres de 1 à taille_tableau.
 * @param taille_tableau Taille du tableau fourni.
 */
void triEratosthene(int tableau[], int taille_tableau);

/**
 *
 * @param tableau Tableau contenant les premiers et les zéros.
 * @param taille_tableau Taille du tableau.
 * @param premier Caractère qui s'affichera lorsque le tableau présente un premier.
 * @param autre Caractère qui s'affichera lorsque le tableau présente un zéro.
 */
void afficherTableauBinaire(int tableau[], int taille_tableau, char premier, char autre);

/**
 * Permets d'afficher le tableau de premiers en passant les zéros contenus à l'intérieur.
 * @param tableau Tableau contenant les premiers et des zéros.
 * @param taille_tableau Taille du tableau.
 */
void afficherTableauPremiers(int tableau[], int taille_tableau);

#endif //LABO06CRIBLE_CRIBLE_H
