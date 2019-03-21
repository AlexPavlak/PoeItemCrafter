#include "../Headers/PlusToMeleeGemLevel.h"
#include "../../Items/Headers/Weapon.h"

PlusToMeleeGemLevel::PlusToMeleeGemLevel(Mod base){

    //For this mod there is no range to roll
    //Set the level based on the name of the mod.
    if(base.getName() == "Combatant"){
        addedGemLevel = 1;
    }
    else
    {
        addedGemLevel = 2;
    }
    
}

void PlusToMeleeGemLevel::applyToItem(Weapon& weapon){

    std::string modString = "+" + std::to_string(addedGemLevel) +" to level of socketed melee skill gems\n";
    weapon.addToModList(modString);
}

int PlusToMeleeGemLevel::getAddedGemLevel(){return addedGemLevel;}

void PlusToMeleeGemLevel::setAddedGemLevel(int newLvl){addedGemLevel = newLvl;}