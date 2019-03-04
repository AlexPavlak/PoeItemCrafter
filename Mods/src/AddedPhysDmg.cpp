#include "../Headers/AddedPhysDmg.h"
#include "../../Items/Headers/Weapon.h"

AddedPhysDmg::AddedPhysDmg(Mod base){
    Rollers roller;
    addedMin = roller.boundedIntRoller(base.getLowerMin(), base.getLowerMax());
    addedMax = roller.boundedIntRoller(base.getUpperMin(), base.getUpperMax());

}

//The AddedPhysDmg mod will modify the weapons base damage directly.
//It will also add its mod description to the 
void AddedPhysDmg::applyToItem(Weapon& weapon){
    weapon.setMinDmg(addedMin);
    weapon.setMaxDmg(addedMax);

    std::string modString = "Adds " + std::to_string(addedMin) + " to " + std::to_string(addedMax) + " damage to attacks\n";
    weapon.addToModList(modString);

}