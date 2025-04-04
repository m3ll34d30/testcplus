#ifndef VOITURE_H
#define VOITURE_H
using namespace std;
#include <iostream>
#include <string>

class voiture
{
private:
    int id;
    std::string marque;
    std::string modele;
    int annee;

public:
    voiture(); 
    voiture(int _id, std::string _marque, std::string _modele, int _annee); 


//getteurs
    int getId() const;
    string getMarque() const;
    string getModele() const ;
    int getAnnee() const ;

//setteurs
    void setId(int _id);
    void setMarque(const string& _marque);
    void setModele(const string& _modele);
    void setAnnee(int _annee);



    void afficher() const; 
};

#endif 
