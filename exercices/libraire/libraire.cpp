#include "libraire.h"
#include <iostream>


using namespace std;


void Libraire::ajouter_livre(Livre* livrePtr) {
        livres.push_back(std::unique_ptr<Livre>(livrePtr));
}

void Libraire::afficher() {
    std::cout << "Livres dans la librairie :" << std::endl;
    for (const auto& livrePtr : livres) {
        livrePtr->afficher();
        cout <<endl;
    }
}


void Libraire::vider_stock() {
    livres.clear();
}
