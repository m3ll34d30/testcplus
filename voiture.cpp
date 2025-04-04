#include "voiture.h"

voiture::voiture() : id(0), marque("inconnu"), modele("inconnu"), annee(0) {}

voiture::voiture(int _id, std::string _marque, std::string _modele, int _annee)
    : id(_id), marque(_marque), modele(_modele), annee(_annee) {
}


//Getteurs

int voiture::getId() const { return id; }
string voiture::getMarque() const { return marque; }
string voiture::getModele() const { return modele; }
int voiture::getAnnee() const { return annee; }

// setteurs
void voiture::setId(int _id) { id = _id; }
void voiture::setModele(const string& _modele) { modele = _modele; }
void voiture::setMarque(const string& _marque) { marque = _marque; }
void voiture::setAnnee(int _annee) {
    if (_annee > 1885) { annee = _annee; }
    else { annee = 0; }
}

void voiture::afficher() const
{
    std::cout << "Voiture\nID: " << id
        << "\nMarque: " << marque
        << "\nModèle: " << modele
        << "\nAnnée: " << annee
        << std::endl;
}
