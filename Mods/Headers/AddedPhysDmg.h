#ifndef ADDEDPHYSDMG_H
#define ADDEDPHYSDMG_H
#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"
class Weapon;

class AddedPhysDmg : public Mod{

    private:
    int addedMin;
    int addedMax;

    public:
    void applyToItem(Weapon& weapon);
    AddedPhysDmg(Mod base);
 
};

#endif
