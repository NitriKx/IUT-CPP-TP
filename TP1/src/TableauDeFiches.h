#ifndef TABLEAUDEFICHES_H
#define TABLEAUDEFICHES_H

#include "Fiche.h"

class TableauDeFiches
{	private :
		Fiche * Contenu;
		int IndiceBas, IndiceHaut;

	public :
        TableauDeFiches();
		TableauDeFiches(int, int);
		TableauDeFiches(const TableauDeFiches &);

		Fiche& Consulter(int) const;
		void Ecrire(Fiche, int);
};

#endif
