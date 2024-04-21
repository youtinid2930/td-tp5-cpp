#ifndef LIBRAIRE_H
#define LIBRAIRE_H
#include "livre.h"
#include <vector>
#include <memory>

class Libraire {
private:
    std::vector<std::unique_ptr<Livre>> livres;
public:
    void ajouter_livre(Livre* livrePtr);
    void afficher();
    void vider_stock();
};


#endif // LIBRAIRE_H
