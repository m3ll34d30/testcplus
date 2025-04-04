#include "voiture.h"

int main()
{
    voiture v1;
    v1.setId(1);
    v1.setModele("V10");
    v1.setMarque("Peugeot");
    v1.setAnnee(1600);

    
    voiture v2 (1, "Tundra", "v11", 1600);


    v1.afficher();
    v2.afficher();


    cout << "V1 a pour marque: " << v1.getMarque() << endl;
    cout << "V2 a pour marque: " << v2.getMarque() << endl;




    return 0;
}
