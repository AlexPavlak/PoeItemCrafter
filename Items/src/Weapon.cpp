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


