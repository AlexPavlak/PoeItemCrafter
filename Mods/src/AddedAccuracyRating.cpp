#include "../Headers/AddedAccuracyRating.h"
#include "../../Items/Headers/Weapon.h"


AddedAccuracyRating::AddedAccuracyRating(Mod base){

    Rollers roller;
    addedAccuracy = roller.boundedIntRoller(base.getLowerMin(), base.getLowerMax());    
}

//THe AddedAcuracyRating mod has no values that will affect the item directly
//It will just add its mod description to the items mod list.
void AddedAccuracyRating::applyToItem(Weapon& weapon){

    std::string modString = "Adds " + std::to_string(addedAccuracy) + " to accuracy rating\n";
    weapon.addToModList(modString);
}

int AddedAccuracyRating::getAddedAccuracy(){return addedAccuracy;}

void AddedAccuracyRating::setAddedAccuracy(int newAcc){addedAccuracy = newAcc;}