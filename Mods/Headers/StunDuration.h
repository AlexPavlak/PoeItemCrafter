#ifndef STUNDURATION_H
#define STUNDURATION_H

#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class StunDuration : public Mod{

    private:
    int increasedDuration;

    public:
    StunDuration(Mod base);
    void applyToItem(Weapon& weapon);
    int getIncreasedDuration();
    void setIncreasedDuration(int);

};

#endif