#include "roman.h"
#include<iostream>

using namespace std;


Roman::Roman(string title,string author,int nbre_page,string bselle,string isbio) : Livre(title,author,nbre_page,bselle) {
    if(isbio == "oui") {
        isBiographie = true;
    }
    else {
        isBiographie = false;
    }
}

Roman::~Roman() {}

void Roman::afficher() {
    Livre::afficher();
    if(isBiographie) {
        cout << "Ce roman est une biographie" << endl;
    }
    else {
        cout << "Ce roman n'est pas une biographie" << endl;
    }
}
