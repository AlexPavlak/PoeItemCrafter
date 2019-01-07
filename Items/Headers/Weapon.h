#ifndef WEAPON_H
#define WEAPON_H
#include "./Item.h"

class Weapon : public Item{

    protected:
    int minDmg;
    int maxDmg;
    float attackSpeed;
    float critChance;

    public:
    Weapon();

};
#endif