#include "../Headers/PhysDmgLifeLeech.h"
#include "../../Items/Headers/Weapon.h"

PhysDmgLifeLeech::PhysDmgLifeLeech(Mod base){
    Rollers roller;
    lifeLeechRate = roller.boundedFloatRoller(base.getLowerMin(),base.getLowerMax());
}

void PhysDmgLifeLeech::applyToItem(Weapon& weapon){
    std::string modString = std::to_string(lifeLeechRate) +"\% of physical damage leeched as life\n";
    weapon.addToModList(modString);
}