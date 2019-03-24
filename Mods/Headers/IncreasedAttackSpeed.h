#ifndef INCREASEDATTACKSPEED_H
#define INCREASEDATTACKSPEED_H

#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class IncreasedAttackSpeed : public Mod{

    private:
    int increasedSpeed;

    public:
    IncreasedAttackSpeed(Mod base);
    void applyToItem(Weapon& weapon);
    int getIncreasedSpeed();
    void setIncreasedSpeed(int);
};

#endif