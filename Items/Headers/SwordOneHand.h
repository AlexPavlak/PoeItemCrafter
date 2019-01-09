#ifndef SWORDONEHAND_H
#define SWORDONEHAND_H
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "./Weapon.h"

class SwordOneHand : public Weapon{

    public:

    std::vector <Mod> basePrefix;
    std::vector <Mod> baseSuffix;

    
    SwordOneHand();

};

#endif