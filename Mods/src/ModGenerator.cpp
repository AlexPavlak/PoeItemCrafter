#include "../Headers/ModGenerator.h"
#include "../../Items/Headers/Weapon.h"

void ModGenerator::modCreatorAndApplier(Mod mod, Weapon* weapon){

        if(mod.name == "addedPhysDmg"){

        AddedPhysDmg addedPhysDmg(mod);
        addedPhysDmg.applyToItem(weapon);
        delete(&addedPhysDmg);
        return;
    }

    if(mod.name == "addedAccuracyRating"){
        AddedAccuracyRating addedAccuracyRating(mod);
        addedAccuracyRating.applyToItem(weapon);
        delete(&addedAccuracyRating);
        return;
    }
}