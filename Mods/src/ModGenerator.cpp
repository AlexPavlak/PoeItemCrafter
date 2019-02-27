#include "../Headers/ModGenerator.h"
#include "../../Items/Headers/Weapon.h"

void ModGenerator::modCreatorAndApplier(Mod mod, Weapon& weapon){

        if(mod.type == "addedPhysDmg"){
        AddedPhysDmg addedPhysDmg(mod);
        addedPhysDmg.applyToItem(weapon);
        return;
    }

    if(mod.type == "addedAccuracyRating"){
        AddedAccuracyRating addedAccuracyRating(mod);
        addedAccuracyRating.applyToItem(weapon);
        return;
    }
}