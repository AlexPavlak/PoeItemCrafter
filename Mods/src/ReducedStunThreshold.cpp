#include "../Headers/ReducedStunThreshold.h"
#include "../../Items/Headers/Weapon.h"

ReducedStunThreshold::ReducedStunThreshold(Mod base){
    Rollers roller;
    reducedThreshold = roller.boundedIntRoller(base.getLowerMin(), base.getLowerMax());
}

void ReducedStunThreshold::applyToItem(Weapon& weapon){
    std::string modString = std::to_string(reducedThreshold) + "\% reduced enemy stun threshold\n";
    weapon.addToModList(modString);

}

int ReducedStunThreshold::getReducedThreshold(){return reducedThreshold;}

void ReducedStunThreshold::setReducedThreshold(int newThreshold){ reducedThreshold = newThreshold;}
