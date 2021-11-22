/*
-------------------------------------------------------------------------------------
Nom du fichier : general.h
Nom du labo    : Labo_06_Crible
Auteur(s)      : Anthony Christen
 					  Fazlija Ylli
Date creation  : 19.11.2021
Description    : Prototypes des fonctions générales définies dans general.cpp.
Remarque(s)    : /
Compilateur    : Mingw-w64 g++ 11.1.0
-------------------------------------------------------------------------------------
*/

#ifndef LABO06CRIBLE_GENERAL_H
#define LABO06CRIBLE_GENERAL_H

#include <string>

//-----------------------------------------------------------------------------------
// Fonction saisieIntervalle
//-----------------------------------------------------------------------------------
// But        récupérer et contôler la saisie de l'utilisateur dans un intervalle
//            donné.
// @param     min         minimum inclus dans l'intervalle.
// @param     max         maximum inclus dans l'intervalle.
// @param     MSG_ERREUR  message à afficher en cas d'entrée erronée.
// Return     saisie de l'utilisateur.
// Exception  n/a
int saisieIntervalle(int min, int max, const std::string& MSG_ERREUR="");

#endif //LABO06CRIBLE_GENERAL_H
