#include "../Headers/AddedStats.h"
#include "../../Items/Headers/Weapon.h"

AddedStats::AddedStats(Mod base){
    Rollers roller;
    std::string modString;
    addedStat = roller.boundedIntRoller(base.getLowerMin(), base.getLowerMax());

    if(base.getType() == "addedStrength"){
        statType = "Strength";
    } else{
        statType = "Dexterity";
       
    }
}

void AddedStats::applyToItem(Weapon& weapon){

    std::string modString;
    modString = "Adds " + std::to_string(addedStat) + " to " + statType;  
    weapon.addToModList(modString);
}

int AddedStats::getAddedStat(){return addedStat;}

void AddedStats::setAddedStat(int newStat){ addedStat = newStat;}