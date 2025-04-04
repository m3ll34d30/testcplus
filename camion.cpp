#include "camion.h"

voiture::voiture() : voiture(), camion(false) {}

voiture::camion(int _id, string _modele, string _marque, int _annee, bool _climatisation)
		: voiture(_id , _modele, _marque, _annee) , camion (_climatisation) {};

//getteurs
bool camion::getClimatisation(return climatisation;)

//setteurs
void camion::setClimatisation(bool _climatisation) { climatisation = _climatisation; }

//methode
void camion::afficher()
{
	voiture::afficher()
		cout << "Climatisation: " <<(climatisation? "Oui" : "Non") << endl;
}