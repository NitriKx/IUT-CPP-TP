#include "Localisation.h"


Localisation::Localisation(void) : depot(), rangee(), emplacement()
{
}


Localisation::Localisation(const string &depot, char rangee, unsigned int emplacement)
	: depot(depot), rangee(rangee), emplacement(emplacement)
{
}

Localisation::~Localisation(void)
{
	delete &this->depot;
}

//
// GETTER AND SETTERS
// 

const string& Localisation::getDepot() const {
	return this->depot;
}

void Localisation::setDepot(const string depot) {
	this->depot = depot;
}

char Localisation::getRangee() const {
	return this->rangee;
}

void Localisation::setRangee(char rangee) {
	this->rangee = rangee;
}

unsigned int Localisation::getEmplacement() const {
	return this->emplacement;
}

void Localisation::setEmplacement(unsigned int emplacement){
	this->emplacement = emplacement;
}