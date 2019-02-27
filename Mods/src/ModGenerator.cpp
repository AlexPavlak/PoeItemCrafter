#include "../Headers/ModGenerator.h"
#include "../../Items/Headers/Weapon.h"

void ModGenerator::modCreatorAndApplier(Mod mod, Weapon& weapon){

        if(mod.type == "addedPhysDmg"){
        std::cout <<"generating damage mod\n";
        AddedPhysDmg addedPhysDmg(mod);
        std::cout<<"applying dmg mod\n";
        addedPhysDmg.applyToItem(weapon);
        return;
    }

    if(mod.type == "addedAccuracyRating"){
        std::cout <<"generating accuracy mod\n";
        AddedAccuracyRating addedAccuracyRating(mod);
        std::cout <<"applying accuracy mod\n";
        addedAccuracyRating.applyToItem(weapon);
        return;
    }
}