#ifndef BEAULIVRE_H
#define BEAULIVRE_H
#include "livre.h"

class Beaulivre : public Livre {
public:
    Beaulivre(std::string,std::string,int,std::string);
    virtual ~Beaulivre();
    double calculer_prix();
};
#endif // BEAULIVRE_H
