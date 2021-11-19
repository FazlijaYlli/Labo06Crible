/*
-----------------------------------------------------------------------------------
Nom du fichier : general.h
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
Date creation  : 19.11.2021
Description    : Fichier d'en-tête déclarant la plupart des fonctions à usage général.
                 Pour l'instant, une fonction de saisie et une fonction d'affichage y sont déclarées.
Remarque(s)    :
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO06CRIBLE_GENERAL_H
#define LABO06CRIBLE_GENERAL_H

#include <string>

/**
 * Demande à l'utilisateur de saisir un chiffre.
 * @param TXT_ERREUR Le message d'erreur à afficher en cas d'entrée erronée.
 * @return Saisie de l'utilisateur.
 */
int saisie(const std::string& MSG_ERREUR);

/**
 * Demande à l'utilisateur de saisir un chiffre dans un intervalle donné.
 * La fonction se répète tant que l'utilisateur entre une valeur erronée.
 * @param MIN Minimum inclus de l'intervalle.
 * @param MAX Maximum inclus de l'intervalle.
 * @param TXT_ERREUR Texte à afficher en cas d'erreur d'entrée.
 * @return Chiffre choisi par l'utilisateur.
 */
int saisieIntervalle(int min, int max, const std::string& MSG_ERREUR);

/**
 * Affiche le texte passé en paramètre.
 * @param TXT Le texte à afficher.
 */
void afficher(const std::string& MSG);

/**
 * Permets d'afficher un tableau à l'écran sur un nombre donné de colonnes.
 * @param nombre_colonnes Le nombre de colonnes souhaité.
 */
void afficherTableau(int tableau[], int taille_tableau, int nombre_colonnes);

#endif //LABO06CRIBLE_GENERAL_H
