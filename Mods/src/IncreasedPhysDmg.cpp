#include "../Headers/IncreasedPhysDmg.h"
#include "../../Items/Headers/Weapon.h"

IncreasedPhysDmg::IncreasedPhysDmg(Mod base){
    Rollers roller;
    increasedDmgPercent = roller.boundedIntRoller(base.getLowerMin(),base.getLowerMax());
}

void IncreasedPhysDmg::applyToItem(Weapon& weapon){
    int increasedMin = weapon.getMinDmg() * (increasedDmgPercent / 100);
    int increasedMax = weapon.getMaxDmg() * (increasedDmgPercent / 100);

    weapon.setMinDmg(weapon.getMinDmg() + increasedMin);
    weapon.setMaxDmg(weapon.getMaxDmg() + increasedMax);

    std::string modString = std::to_string(increasedDmgPercent) + "\% increased physical damage \n"; 
    weapon.addToModList(modString);
}

int IncreasedPhysDmg::getIncreasedDmg(){return increasedDmgPercent;}
void IncreasedPhysDmg::setIncreasedDmg(int newDmg){ increasedDmgPercent = newDmg;}