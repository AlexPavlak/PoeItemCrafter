#ifndef INCREASEDPHYSDMGANDADDEDACCURACY_H
#define INCREASEDPHYSDMGANDADDEDACCURACY_H
#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class IncreasedPhysDmgAndAddedAccuracy: public Mod{

    private:
    int increasedPhys;
    int addedAccuracy;


    public:
    IncreasedPhysDmgAndAddedAccuracy(Mod base);
    void applyToItem(Weapon& weapon);
    int getIncreasedPhys();
    void setIncreasedPhys(int);
    int getAddedAccuracy();
    void setAddedAccuracy(int);

};

#endif