#ifndef ADDEDACCURACYRATING_H
#define ADDEDACCURACYRATING_H

#include "./Mod.h"
//#include "../../Items/Headers/Weapon.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;
class AddedAccuracyRating : public Mod{

    private:
    int addedAccuracy;

    public:
    void applyToItem(Weapon& weapon);
    AddedAccuracyRating(Mod base);
    int getAddedAccuracy();
    void setAddedAccuracy(int);
};

#endif