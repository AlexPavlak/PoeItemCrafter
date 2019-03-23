#ifndef WEAPON_H
#define WEAPON_H
#include "./Item.h"
#include <iostream>

class ModGenerator;
class Weapon:public Item{

    protected:
    ModGenerator *modGenerator;
    float attackSpeed;
    float critChance;
    int minDmg;
    int maxDmg;

    public:
    Weapon();
    void applyMods();
    void setMinDmg(int);
    int getMinDmg();
    void setMaxDmg(int);
    int getMaxDmg();
    void setAttackSpeed(float);
    float getAttackSpeed();
    

};
#endif