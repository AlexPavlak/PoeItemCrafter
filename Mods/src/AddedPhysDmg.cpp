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
    weapon.setMinDmg(weapon.getMinDmg() + addedMin);
    weapon.setMaxDmg(weapon.getMaxDmg() + addedMax);

    std::string modString = "Adds " + std::to_string(addedMin) + " to " + std::to_string(addedMax) + " damage to attacks\n";
    weapon.addToModList(modString);

}

int AddedPhysDmg::getAddedMin(){return addedMin;}

void AddedPhysDmg::setAddedMin(int newMin){addedMin = newMin;}

int AddedPhysDmg::getAddedMax(){return addedMax;}

void AddedPhysDmg::setAddedMax(int newMax){addedMax = newMax;}