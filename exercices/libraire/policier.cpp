#include "policier.h"
#include <iostream>

using namespace std;



Policier::Policier(string title,string author,int nbre_page,string bselle,string isbio): Roman(title,author,nbre_page,bselle,isbio) {}

Policier::~Policier() {}


double Policier::calculer_prix() {
    double prix = Livre::calculer_prix() - 10;
    if(prix<0) {
        return 1;
    }
    return prix;
}


