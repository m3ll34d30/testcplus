#ifndef CAMION_H
#define CAMION_H

#include <iostream>
#include <string>

using namespace std;

class camion : public voiture 
{
private:
	bool climatisation 

public:
	camion();
	camion(bool climatisation);

//getteurs
	bool getClimatisation() const;

//setteurs
	void setClimatisation(bool _climatisation);

	void afficher() override;


};






#endif