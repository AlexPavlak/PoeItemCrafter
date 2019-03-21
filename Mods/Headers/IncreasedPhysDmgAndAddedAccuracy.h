#ifndef INCREASEDPHYSDMGANDADDEDACCURACY_H
#define INCREASEDPHYSDMGANDADDEDACCURACY_H
#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class IncreasedPhysDmgAndAddedAccuracy: public Mod{

    private:
    int increasedPhysMin;
    int increasedPhysMax;
    int addedAccuracyMin;
    int addedAccuracyMax;

    public:
    IncreasedPhysDmgAndAddedAccuracy(Mod base);
    void applyToItem(Weapon& weapon);
    int getIncreasedPhysMin();
    void setIncreasedPhysMin(int);
    int getIncreasedPhysMax();
    void setIncreasedPhysMax(int);
    int getAddedAccuracyMin();
    void setAddedAccuracyMin(int);
    int getAddedAccuracyMax();
    void setAddedAccuracyMax(int);
};

#endif