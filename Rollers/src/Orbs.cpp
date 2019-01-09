#include "../Headers/Orbs.h"

void Orbs::transmute(Item &item, std::vector<Mod> &rollingPrefixes, std::vector<Mod> &rollingSuffixes){

    if(item.rarity != 1){

        std::cout << "Item is not normal, can not transmute." << std::endl;
        return;
    }

    item.rarity = 2;
    std::default_random_engine generator;
    std::uniform_int_distribution<int> oneOrTwo(1,2);
    std::uniform_int_distribution<int> prefixDist(0,rollingPrefixes.size() - 1);
    std::uniform_int_distribution<int> suffixDist(0,rollingSuffixes.size() - 1);
    int numberOfMods = oneOrTwo(generator);
    int prefixOrSuffix = oneOrTwo(generator);

    if(numberOfMods == 1){
        if(prefixOrSuffix == 1){
            //roll a prefix
            int prefixToAdd = prefixDist(generator);
            std::cout<<"prefixToAdd is: " << prefixToAdd << std::endl;
            std::cout <<"adding " <<rollingPrefixes[prefixToAdd].name<<"to prefixes"<<std::endl;
            item.prefix.push_back(rollingPrefixes[prefixToAdd]);
        }else{
            //roll a suffix
            int suffixToAdd = suffixDist(generator);
            std::cout <<"suffixToAdd is: " << suffixToAdd << std::endl;
            std::cout <<"adding " <<rollingSuffixes[suffixToAdd].name<<"to suffixes"<<std::endl;
            item.suffix.push_back(rollingSuffixes[suffixToAdd]);
        }
    }else{
        int prefixToAdd = prefixDist(generator);
        std::cout<<"prefixToAdd is: " << prefixToAdd << std::endl;
        int suffixToAdd = suffixDist(generator);
        std::cout <<"suffixToAdd is: " << suffixToAdd << std::endl;

        std::cout <<"adding " <<rollingPrefixes[prefixToAdd].name<<"to prefixes"<<std::endl;
        item.prefix.push_back(rollingPrefixes[prefixToAdd]);

        std::cout <<"adding " <<rollingSuffixes[suffixToAdd].name<<"to suffixes"<<std::endl;
        item.suffix.push_back(rollingSuffixes[suffixToAdd]);
    }
}