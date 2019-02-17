#ifndef WEAPON_H
#define WEAPON_H
#include "./Item.h"

class ModGenerator;
class Weapon:public Item{

    protected:
    ModGenerator *modGenerator;
    float attackSpeed;
    float critChance;

    public:
    Weapon();
    void applyMods();
    int minDmg;
    int maxDmg;

};
#endif