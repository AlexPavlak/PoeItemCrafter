#include "../Headers/Weapon.h"
#include "../../Mods/Headers/ModGenerator.h"

Weapon::Weapon(){
    
}


void Weapon::applyMods(){

    for(int i = 0; i<getPrefixSize(); i++){
        //create each mod and apply it to the item. 
        modGenerator->modCreatorAndApplier(getPrefixAt(i),*this);
    }

    for(int j = 0; j<getSuffixSize(); j++){
        //create each mod and apply it to the item.
        modGenerator->modCreatorAndApplier(getSuffixAt(j),*this);       
    }
}

void Weapon::setMinDmg(int newMin){minDmg = newMin;}

int Weapon::getMinDmg(){return minDmg;}

void Weapon::setMaxDmg(int newMax){maxDmg = newMax;}

int Weapon::getMaxDmg(){return maxDmg;}

void Weapon::setAttackSpeed(float newSpeed){ attackSpeed = newSpeed;}

float Weapon::getAttackSpeed(){ return attackSpeed;}



