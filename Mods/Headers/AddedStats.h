#ifndef ADDEDSTATS_H
#define ADDEDSTATS_H

#include "./Mod.h"
#include "../../Rollers/Headers/Rollers.h"

class Weapon;

class AddedStats : public Mod{

    private:
    int addedStat;
    std::string statType;

    public:
    AddedStats(Mod base);
    void applyToItem(Weapon& weapon);
    int getAddedStat();
    void setAddedStat(int);


};

#endif