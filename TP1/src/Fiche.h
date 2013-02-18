#ifndef FICHES_H
#define FICHES_H

#include <string>

using namespace std;

class Fiche
{
    private :
		string numero;
		float Pts;

	public :
        Fiche();
        Fiche(string, float);

        void setNumero (string);
        string getNumero() const;

        void setPts (float);
        void addPts (float);
        float getPts() const;

};

#endif
