#include "../Headers/IncreasedPhysDmgAndAddedAccuracy.h"
#include "../../Items/Headers/Weapon.h"

IncreasedPhysDmgAndAddedAccuracy::IncreasedPhysDmgAndAddedAccuracy(Mod base){
    Rollers roller;
    increasedPhys = roller.boundedIntRoller(base.getLowerMin(),base.getLowerMax());
    addedAccuracy = roller.boundedIntRoller(base.getUpperMin(),base.getUpperMax());

}

void IncreasedPhysDmgAndAddedAccuracy::applyToItem(Weapon& weapon){
    float increasedPercent = (float) increasedPhys / 100;
    int increasedMinDmg = (int) weapon.getMinDmg() * increasedPercent;
    int increasedMaxDmg = (int) weapon.getMaxDmg() * increasedPercent;

    weapon.setMinDmg(weapon.getMinDmg() + increasedMinDmg);
    weapon.setMaxDmg(weapon.getMaxDmg() + increasedMaxDmg);

    std::string modString = std::to_string(increasedPhys) + "\% increased physical damage\n";
    modString = modString + "Adds " + std::to_string(addedAccuracy) + " to accuracy rating\n";
    weapon.addToModList(modString);

}

int IncreasedPhysDmgAndAddedAccuracy::getIncreasedPhys(){return increasedPhys;}

void IncreasedPhysDmgAndAddedAccuracy::setIncreasedPhys(int newPhys){ increasedPhys = newPhys;}

int IncreasedPhysDmgAndAddedAccuracy::getAddedAccuracy(){return addedAccuracy;}

void IncreasedPhysDmgAndAddedAccuracy::setAddedAccuracy(int newAcc){addedAccuracy = newAcc;}

