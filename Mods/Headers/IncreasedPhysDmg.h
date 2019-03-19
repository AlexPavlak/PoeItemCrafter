#ifndef INCREASEDPHYSDMG_H
#define INCREASEDPHYSDMG_H
#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class IncreasedPhysDmg : public Mod{

    private:
    int increasedDmgPercent;


    public:
    IncreasedPhysDmg(Mod base);
    void applyToItem(Weapon& weapon);
    int getIncreasedDmg();
    void setIncreasedDmg(int);
};

#endif