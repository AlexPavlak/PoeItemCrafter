#include "../Headers/Weapon.h"
#include "../../Mods/Headers/ModGenerator.h"

Weapon::Weapon(){
    
}


void Weapon::applyMods(){

    for(int i = 0; i<prefix.size(); i++){
        //create each mod and apply it to the item.
        std::cout <<"Generating  "<<prefix[i].type<< " prefix\n"; 
        modGenerator->modCreatorAndApplier(prefix[i],*this);
    }

    for(int j = 0; j<suffix.size(); j++){
        //create each mod and apply it to the item.
        std::cout <<"Generating  "<<suffix[j].type<< " suffix\n";
        modGenerator->modCreatorAndApplier(suffix[j],*this);       
    }
}


