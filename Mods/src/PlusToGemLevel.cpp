#include "../Headers/PlusToGemLevel.h"
#include "../../Items/Headers/Weapon.h"

PlusToGemLevel::PlusToGemLevel(Mod base){
    //For this mod there is no range to roll, simply set it.
    addedGemLevel = 1;
}

void PlusToGemLevel::applyToItem(Weapon& weapon){

    std::string modString = "+" + std::to_string(addedGemLevel) +" to level of socketed skill gems\n";
    weapon.addToModList(modString);
}

int PlusToGemLevel::getAddedGemLevel(){return addedGemLevel;}

void PlusToGemLevel::setAddedGemLevel(int newLvl){addedGemLevel = newLvl;}