#ifndef JEWELEDFOIL_H
#define JEWELEDFOIL_H

#include <string>
#include <iostream>
#include "./SwordOneHand.h"

class JeweledFoil:public SwordOneHand{

    public:
    std::string implicit;
    JeweledFoil(int);
    void printItem();


};
#endif