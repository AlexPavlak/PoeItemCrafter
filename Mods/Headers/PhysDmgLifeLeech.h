#ifndef PHYSDMGLIFELEECH_H
#define PHYSDMGLIFELEECH_H
#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class PhysDmgLifeLeech : public Mod{

    private:
    float lifeLeechRate;

    public:
    PhysDmgLifeLeech(Mod base);
    void applyToItem(Weapon& weapon);
    float getlifeLeechRate();
    void setLifeLeechRate(float);
};

#endif