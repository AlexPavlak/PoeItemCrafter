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

    if(mod.getType() == "increasedPhysDmgAndAddedAccuracy"){
        IncreasedPhysDmgAndAddedAccuracy increasedPhysDmgAndAddedAccuracy(mod);
        increasedPhysDmgAndAddedAccuracy.applyToItem(weapon);
        return;
    }

    if(mod.getType() == "plusToGemLvl"){
        PlusToGemLevel plusToGemLevel(mod);
        plusToGemLevel.applyToItem(weapon);
        return;
    }

    if(mod.getType() == "plusToMeleeGemLvl"){
        PlusToMeleeGemLevel plusToMeleeGemLevel(mod);
        plusToMeleeGemLevel.applyToItem(weapon);
        return;
    }

    if(mod.getType() == "physDmgLifeLeech"){
        PhysDmgLifeLeech physDmgLifeLeech(mod);
        physDmgLifeLeech.applyToItem(weapon);
        return;
    }

    if(mod.getType() == "addedStrength" || mod.getType() == "addedDexterity"){
        AddedStats addedStats(mod);
        addedStats.applyToItem(weapon);
        return;
    }

    if(mod.getType() == "increasedAttackSpeed"){
        IncreasedAttackSpeed increasedAttackSpeed(mod);
        increasedAttackSpeed.applyToItem(weapon);
        return;
    }

    if(mod.getType() == "reducedStunThreshold"){
        ReducedStunThreshold reducedStunThreshold(mod);
        reducedStunThreshold.applyToItem(weapon);
    }

    if(mod.getType() == "fireResistance" || mod.getType() =="coldResistance" || 
                   mod.getType() == "lightningResistance" || mod.getType() == "chaosResistance"){
        Resistances resistances(mod);
        resistances.applyToItem(weapon);

    }
}