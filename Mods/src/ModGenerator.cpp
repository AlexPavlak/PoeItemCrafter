#include "../Headers/ModGenerator.h"
#include "../../Items/Headers/Weapon.h"

//Mod Factory
//Takes a base Mod from an item and turns it into the appropriate mod.
//Once created the mod is applied to the item directly then deleted. 
void ModGenerator::modCreatorAndApplier(Mod mod, Weapon& weapon){

        if(mod.getType() == "addedPhysDmg"){
        AddedPhysDmg addedPhysDmg(mod);
        addedPhysDmg.applyToItem(weapon);
        return;
    }

    if(mod.getType() == "addedAccuracyRating"){
        AddedAccuracyRating addedAccuracyRating(mod);
        addedAccuracyRating.applyToItem(weapon);
        return;
    }

    if(mod.getType() == "increasedPhysDmg"){
        IncreasedPhysDmg increasedPhysDmg(mod);
        increasedPhysDmg.applyToItem(weapon);
        return;
    }
}