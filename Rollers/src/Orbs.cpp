#include "../Headers/Orbs.h"

void Orbs::transmute(Item &item, std::vector<Mod> rollingPrefixes, std::vector<Mod> rollingSuffixes){
    Rollers roller;
    //Transmutation orb should only be applid to normal items. If it is not 
    //normal do not transmute. 
    if(item.getRarity() != 1){

        std::cout << "Item is not normal, can not transmute." << std::endl;
        return;
    }

    //A magic item may have one or two mods
    int numberOfMods = roller.boundedIntRoller(1,2);

    //If a magic item has only one mod, we must determine
    //whether it will be a prefix of suffix
    int prefixOrSuffix = roller.boundedIntRoller(1,2);

    //Determines whether a suffix or prefix needs to be added and adds
    //the appropriate mod
    if(numberOfMods == 1){
        if(prefixOrSuffix == 1){
            //roll a prefix
            int prefixToAdd = roller.boundedIntRoller(0,rollingPrefixes.size() - 1);
            item.addToPrefix(rollingPrefixes[prefixToAdd]);
        }else{
            //roll a suffix
            int suffixToAdd = roller.boundedIntRoller(0,rollingSuffixes.size() - 1);
            item.addToSuffix(rollingSuffixes[suffixToAdd]);
        }
    //We are rolling and adding 2 mods, 1 prefix, 1 suffix to the item. 
    }else{
        int prefixToAdd = roller.boundedIntRoller(0,rollingPrefixes.size() - 1);
        int suffixToAdd = roller.boundedIntRoller(0,rollingSuffixes.size() - 1);

        item.addToPrefix(rollingPrefixes[prefixToAdd]);

        item.addToSuffix(rollingSuffixes[suffixToAdd]);
    }
}