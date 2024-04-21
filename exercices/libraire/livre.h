#ifndef LIVRE_H
#define LIVRE_H
#include <string>

class Livre {
protected:
    std::string titre;
    std::string auteur;
    int nombre_page;
    bool bestseller;
public:
    Livre(std::string,std::string,int,std::string);
    virtual ~Livre();
    virtual double calculer_prix();
    double get_prix();
    virtual void afficher();
};
#endif // LIVRE_H
