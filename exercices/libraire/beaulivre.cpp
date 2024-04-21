#include "beaulivre.h"
#include <iostream>


using namespace std;


Beaulivre::Beaulivre(string title,string author,int nbre_page,string bseller):Livre(title,author,nbre_page,bseller) {}


Beaulivre::~Beaulivre() {}

double Beaulivre::calculer_prix() {
    return Livre::calculer_prix() + 30;
}
