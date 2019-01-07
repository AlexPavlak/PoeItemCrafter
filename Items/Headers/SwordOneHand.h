#ifndef SWORDONEHAND_H
#define SWORDONEHAND_H
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "./Weapon.h"

class SwordOneHand : public Weapon{

    protected:

    std::list <Mod> basePrefix;
    std::list <Mod> baseSuffix;

    public:
    SwordOneHand();

};

#endif