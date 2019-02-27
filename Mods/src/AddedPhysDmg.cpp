#include "../Headers/AddedPhysDmg.h"
#include "../../Items/Headers/Weapon.h"

AddedPhysDmg::AddedPhysDmg(Mod base){
    Rollers roller;
    addedMin = roller.boundedIntRoller(base.lowerMin, base.lowerMax);
    addedMax = roller.boundedIntRoller(base.upperMin, base.upperMax);

}

void AddedPhysDmg::applyToItem(Weapon& weapon){
    weapon.minDmg += addedMin;
    weapon.maxDmg += addedMax;

    std::string modString = "Adds " + std::to_string(addedMin) + " to " + std::to_string(addedMax) + " damage to attacks\n";
    weapon.modList.append(modString);

}