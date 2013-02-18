#include "TableauDeFiches.h"
#include "Fiche.h"

#include <iostream>
#include <iterator>

TableauDeFiches::TableauDeFiches() : IndiceBas(0), IndiceHaut(0) {
	this->Contenu = new Fiche[1];
}

/**
	@param indiceBas Indice le plus bas du tableau
	@param indicehaut Indice le plus haut du tableau
**/
TableauDeFiches::TableauDeFiches(int indiceBas, int indiceHaut) {
    this->IndiceBas = indiceBas;
    this->IndiceHaut = indiceHaut;
	this->Contenu = new Fiche[IndiceHaut-IndiceBas+1];
}

TableauDeFiches::TableauDeFiches(const TableauDeFiches &original) {
	int tailleTab = original.IndiceHaut - original.IndiceBas + 1;
	Fiche *tab = new Fiche[tailleTab];

	// On utilise un checked array pour enlever le warning
	copy(original.Contenu, original.Contenu+tailleTab, stdext::checked_array_iterator<Fiche*>(tab, tailleTab));
	
	// On remplis les champs du nouvel objet
	this->Contenu = tab;
	this->IndiceBas = original.IndiceBas;
	this->IndiceHaut = original.IndiceHaut;
}

void TableauDeFiches::Ecrire(Fiche fiche, int indice) {
	
	int ancienneTaille = this->IndiceHaut - this->IndiceBas + 1;

	// On calcule les nouvelles bornes du tableau
	if(indice > this->IndiceHaut) this->IndiceHaut = indice;
	if(indice < this->IndiceBas) this->IndiceBas = indice;

	int tailleTab = this->IndiceHaut - this->IndiceBas + 1;

	// On alloue le tableau
	Fiche* newTab = new Fiche[tailleTab];

	copy(this->Contenu, this->Contenu+ancienneTaille, stdext::checked_array_iterator<Fiche*>(newTab,tailleTab));
	newTab[indice] = fiche;

	this->Contenu = newTab;
}

Fiche& TableauDeFiches::Consulter(int indice) const {
	return this->Contenu[indice];
}

