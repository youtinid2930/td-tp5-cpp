#include "livre.h"
#include <iostream>


using namespace std;


Livre::Livre(string titre,string auteur,int nombre_page,string bseller) {
    this->titre = titre;
    this->auteur = auteur;
    this->nombre_page = nombre_page;
    if(bseller == "oui") {
        bestseller = true;
    }
    else {
        bestseller = false;
    }
}

Livre::~Livre() {}


double Livre::calculer_prix() {
    if(bestseller) {
        return nombre_page*0.3+50;
    }
    return nombre_page*0.3;
}

void Livre::afficher() {
    cout << "Titre : "<< titre << endl;
    cout << "Auteur: "<< auteur << endl;
    cout << "Nombre de page: "<<nombre_page<<endl;
    if(bestseller) {
        cout <<"bestseller: oui"<<endl;
    }
    else {
        cout <<"bestseller: non"<<endl;
    }
    cout <<"Prix : "<<calculer_prix()<<endl; // ona ajouter cette ligne dans l'exercice 2
}
