#include "../Headers/Orbs.h"

void Orbs::transmute(Item &item, std::vector<Mod> &rollingPrefixes, std::vector<Mod> &rollingSuffixes){

    if(item.getRarity() != 1){

        std::cout << "Item is not normal, can not transmute." << std::endl;
        return;
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    item.setRarity(2);
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> oneOrTwo(1,2);
    std::uniform_int_distribution<int> prefixDist(0,rollingPrefixes.size() - 1);
    std::uniform_int_distribution<int> suffixDist(0,rollingSuffixes.size() - 1);

    //A magic item may have one or two mods
    int numberOfMods = oneOrTwo(generator);

    //If a magic item has only one mod, we must determine
    //whether it will be a prefix of suffix
    int prefixOrSuffix = oneOrTwo(generator);

    //Determines whether a suffix or prefix needs to be added and adds
    //the appropriate mod
    if(numberOfMods == 1){
        if(prefixOrSuffix == 1){
            //roll a prefix
            int prefixToAdd = prefixDist(generator);
            item.prefix.push_back(rollingPrefixes[prefixToAdd]);
        }else{
            //roll a suffix
            int suffixToAdd = suffixDist(generator);
            item.suffix.push_back(rollingSuffixes[suffixToAdd]);
        }
    //We are rolling and adding 2 mods, 1 prefix, 1 suffix to the item. 
    }else{
        int prefixToAdd = prefixDist(generator);
        int suffixToAdd = suffixDist(generator);

        item.prefix.push_back(rollingPrefixes[prefixToAdd]);

        item.suffix.push_back(rollingSuffixes[suffixToAdd]);
    }
}