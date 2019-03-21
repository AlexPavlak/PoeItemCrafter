#ifndef PLUSTOMELEEGEMLEVEL_H
#define PLUSTOMELEEGEMLEVEL_H
#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class PlusToMeleeGemLevel : public Mod{

    private:
    int addedGemLevel;

    public:
    PlusToMeleeGemLevel(Mod base);
    void applyToItem(Weapon& weapon);
    int getAddedGemLevel();
    void setAddedGemLevel(int);

};
#endif