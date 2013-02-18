#include"Fiche.h"
#include<iostream>

void afficher(const Fiche &);

int main2()
{	Fiche F("12345", 45.5);
	Fiche G(F);

	afficher(F);
	F.addPts(5.0);
	cout<<"Nombre Pts : "<<F.getPts()<<"\n";
	F.setNumero("78956");
	cout<<"nouveau numero : "<<F.getNumero()<<"\n";
	F.setPts(100.0);
	cout<<"F : ";
	afficher(F);
	cout<<"G : ";
	afficher(G);

	Fiche tab[5];

    afficher(tab[1]);

	/**

        Si l'on ne définis pas explicitement de contructeur par défaut (sans paramètres),
        le compilateur en créer un ne contenant pas d'instructions.

        Lorsque l'on consulte un élément qui n'a pas été affecté, on s'aperçoit qu'il a été initialisé avec son constructeur par défaut.

	**/
	system("PAUSE");
	return(0);
}

void afficher(const Fiche & Fic)
{	cout<<Fic.getNumero()<<" "<<Fic.getPts()<<"\n";	}
