#ifndef POLICIER_H
#define POLICIER_H
#include "roman.h"


class Policier : public Roman {
public:
    Policier(std::string,std::string,int,std::string,std::string);
    virtual ~Policier();
    double calculer_prix();
};
#endif // POLICIER_H
