#include "../Headers/StunDuration.h"
#include "../../Items/Headers/Weapon.h"

StunDuration::StunDuration(Mod base){
    Rollers roller;
    increasedDuration = roller.boundedIntRoller(base.getLowerMin(), base.getLowerMax());

}

void StunDuration::applyToItem(Weapon& weapon){

    std::string modString;
    modString = std::to_string(increasedDuration) +"\% increased stun duration on enemies\n";
    weapon.addToModList(modString);
}

int StunDuration::getIncreasedDuration(){return increasedDuration;}

void StunDuration::setIncreasedDuration(int newDuration){ increasedDuration = newDuration;}
