#ifndef RESISTANCES_H
#define RESISTANCES_H

#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class Resistances : public Mod{

    private:
    int addedResistance;
    std::string resistanceType;

    public:
    Resistances(Mod base);
    void applyToItem(Weapon& weapon);
    int getAddedResistance();
    void setAddedResistance(int);

};

#endif