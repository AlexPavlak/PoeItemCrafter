#ifndef JEWELEDFOIL_H
#define JEWELEDFOIL_H

#include <string>
#include <iostream>
#include "./SwordOneHand.h"

class JeweledFoil:public SwordOneHand{

    protected:
    std::string implicit;

    public:
    JeweledFoil(int);
    void printItem();
    std::string getImplicit();
    void setImplicit(std::string);


};
#endif