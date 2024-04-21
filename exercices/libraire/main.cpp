#include <iostream>
#include "livre.h"
#include "roman.h"
#include "policier.h"
#include "beaulivre.h"
#include "libraire.h"

using namespace std;

int main()
{
    cout << "test de la premier parti :" << endl;
    Livre livre1("POO en langageC++","F. Mohammed",822,"oui"),livre2("Lefou","Gogol",252,"non");
    livre1.afficher();
    cout << "Prix: " <<livre1.calculer_prix()<<endl;
    cout << "--------------------------------------"<<endl;
    livre2.afficher();
    cout << "Prix: " <<livre2.calculer_prix()<<endl;
    cout << "test de l'exercice 1 (heritage) :" << endl;
    Livre livre3("Fleuves d'europe","C. Osborne",150,"non");
    Policier policier1("Lechien des Basker ville","A.C.Doyle",221,"non","non"),policier2("Le Parrain","A.Cuso",367,"oui","non");
    policier1.afficher();
    cout << "Prix : "<< policier1.calculer_prix() <<endl;
    cout <<" "<<endl;
    policier2.afficher();
    cout << "Prix : "<< policier2.calculer_prix() <<endl;
    cout <<" "<<endl;
    Roman roman1("Lebaronperché","I.Calvino",283,"non","non"),roman2("Mémoires de géronimo","S.M. barrett",173,"non","oui");
    roman1.afficher();
    cout << "Prix : "<< roman1.calculer_prix() <<endl;
    cout <<" "<<endl;
    roman2.afficher();
    cout << "Prix : "<< roman2.calculer_prix() <<endl;
    cout <<" "<<endl;
    Beaulivre beaulivre1("Fleuves d'europe","C. Osborne",150,"non");
    beaulivre1.afficher();
    cout << "Prix : "<< beaulivre1.calculer_prix() <<endl;
    cout << "test de l'exercice 2 (polymorphisme) : "<<endl;
    Libraire l;

    l.ajouter_livre(new Policier("Le chien des Baskerville", "A.C.Doyle", 221, "non", "non"));
    l.ajouter_livre(new Policier("Le Parrain", "A.Cuso", 367, "oui", "non"));
    l.ajouter_livre(new Roman("Le baron perché", "I. Calvino", 283, "non", "non"));
    l.ajouter_livre(new Roman("Mémoires de Géronimo", "S.M. Barrett", 173, "non", "oui"));
    l.ajouter_livre(new Beaulivre("Fleuves d'Europe", "C. Osborne", 150, "non"));

    l.afficher();
    l.vider_stock();
    return 0;
}
