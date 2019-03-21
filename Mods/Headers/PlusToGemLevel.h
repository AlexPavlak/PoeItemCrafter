#ifndef PLUSTOGEMLEVEL_H
#define PLUSTOGEMLEVEL_H
#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class PlusToGemLevel : public Mod{

    private:
    int addedGemLevel;

    public:
    PlusToGemLevel(Mod base);
    void applyToItem(Weapon& weapon);
    int getAddedGemLevel();
    void setAddedGemLevel(int);

};
#endif