#pragma once
#include <iostream>

using namespace std;

class Localisation
{

private:
	string depot;
	char rangee;
	unsigned int emplacement;

public:
	Localisation(void);
	Localisation(const string &depot, char rangee, unsigned int emplacement);
	~Localisation(void);

	//
	// GETTER AND SETTERS
	//

	const string& getDepot() const;
	void setDepot(string);
	
	char getRangee() const;
	void setRangee(char rangee);

	unsigned int getEmplacement() const;
	void setEmplacement(unsigned int emplacement);
};

