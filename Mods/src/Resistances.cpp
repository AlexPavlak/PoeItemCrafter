#include "../Headers/Resistances.h"
#include "../../Items/Headers/Weapon.h"

Resistances::Resistances(Mod base){
    Rollers roller;

    addedResistance = roller.boundedIntRoller(base.getLowerMin(), base.getLowerMax());

    //determine which resistance we are adding.
    if(base.getType() == "fireResistance"){
        resistanceType = "Fire";
    } 
    else if (base.getType() == "coldResistance"){
        resistanceType = "Cold";
    }
    else if (base.getType() == "lightningResistance"){
        resistanceType = "Lightning";
    }
    else if (base.getType() == "chaosResistance"){
        resistanceType = "Chaos";
    }
}

void Resistances::applyToItem(Weapon& weapon){
    std::string modString;
    modString = std::to_string(addedResistance) + "\% to " + resistanceType + " resistance\n";
    weapon.addToModList(modString);
}

int Resistances::getAddedResistance(){return addedResistance;}

void Resistances::setAddedResistance(int newResistance){ addedResistance = newResistance;}