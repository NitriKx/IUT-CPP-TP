#include "Fiche.h"
#include <iostream>

/**
    Constructeurs
**/
Fiche::Fiche() : numero(""), Pts(0.0) {
    // Fiche("", 0);
}

Fiche::Fiche(string _numero, float _pts) : numero(_numero), Pts(_pts) {
}

/**
    GETTERS AND SETTERS
**/

string Fiche::getNumero() const {
    return this->numero;
}

void Fiche::setNumero(string numero) {
    this->numero = numero;
}

float Fiche::getPts() const {
    return this->Pts;
}

void Fiche::setPts(float Pts) {
    this->Pts = Pts;
}

void Fiche::addPts(float pts) {
    this->Pts += pts;
}
