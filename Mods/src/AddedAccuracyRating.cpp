#include "../Headers/AddedAccuracyRating.h"
#include "../../Items/Headers/Weapon.h"


AddedAccuracyRating::AddedAccuracyRating(Mod base){

    Rollers roller;
    addedAccuracy = roller.boundedIntRoller(base.lowerMin, base.lowerMax);    
}

void AddedAccuracyRating::applyToItem(Weapon* weapon){

    std::string modString = "Adds " + std::to_string(addedAccuracy) + " to accuracy rating\n";
    weapon->modList += modString;
}