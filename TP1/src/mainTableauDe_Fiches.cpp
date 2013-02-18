#include "TableauDeFiches.h"
#include <iostream>

int main(int argc, char *argv[])
{	
	TableauDeFiches Tab;
	Fiche F("12345", 50.0);
	Fiche G("45678", 25.5);
	Fiche H("95142", 10.0);

	Tab.Ecrire(F, 0);
	Tab.Ecrire(G, 1);

	for(int i=0;i<2;i++)
		cout<<"Tab["<<i<<"] : "<<Tab.Consulter(i).getNumero()<<" "<<Tab.Consulter(i).getPts()<<"\n";

	Tab.Consulter(0).addPts(50);
	cout<<"\nTab[0] : "<<Tab.Consulter(0).getNumero()<<" "<<Tab.Consulter(0).getPts()<<"\n\n";

	TableauDeFiches Tab2(Tab);
	for(int i=0;i<2;i++)
		cout<<"Tab2["<<i<<"] : "<<Tab2.Consulter(i).getNumero()<<" "<<Tab2.Consulter(i).getPts()<<"\n";
  	Tab.Consulter(1).addPts(5.5);
	Tab.Ecrire(H, 2);
	cout<<endl;
	for(int i=0;i<3;i++)
		cout<<"Tab["<<i<<"] : "<<Tab.Consulter(i).getNumero()<<" "<<Tab.Consulter(i).getPts()<<"\n";
	cout<<endl;
	/*for(int i=0;i<3;i++)
		cout<<"Tab2["<<i<<"] : "<<Tab2.Consulter(i).getNumero()<<" "<<Tab2.Consulter(i).getPts()<<"\n";	//Pb ? 
		//-> Oui ici il y a un problème car on a pas ajouté H à tab2 et donc il n'y a rien à l'index 2.
		//		On l'a bien ajouté à Tab mais Tab2 est une copie et n'est donc pas lié à tab1
	*/
	return 0;
}

