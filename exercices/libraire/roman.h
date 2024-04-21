#ifndef ROMAN_H
#define ROMAN_H
#include "livre.h"

class Roman : public Livre {
protected:
    bool isBiographie;
public:
    Roman(std::string,std::string,int,std::string,std::string);
    virtual ~Roman();
    void afficher();
};

#endif // ROMAN_H
