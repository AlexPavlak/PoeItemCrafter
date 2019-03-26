#ifndef REDUCEDSTUNTHRESHOLD_H
#define REDUCEDSTUNTHRESHOLD_H

#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class ReducedStunThreshold : public Mod{

    private:
    int reducedThreshold;

    public:
    ReducedStunThreshold(Mod base);
    void applyToItem(Weapon& weapon);
    int getReducedThreshold();
    void setReducedThreshold(int);
};

#endif 