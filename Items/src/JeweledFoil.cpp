#include "../Headers/JeweledFoil.h"

JeweledFoil::JeweledFoil(int newLevel){
    implicit = "+25\% to Global Critical Strike Multiplier";
    minDmg = 32;
    maxDmg = 60;
    requiredLevel = 68;
    requiredDex = 212;
    requiredInt = 0;
    requiredStr = 0;
    critChance = 5.5f;
    attackSpeed = 1.6f;
    itemLevel = newLevel;
    fillPrefix();
    fillSuffix();
}

void JeweledFoil::printItem(){

    std::cout << "Item Level: " << itemLevel << std::endl;
    std::cout << "Rarity: " << rarity << std::endl;
    std::cout << "Required Level: " << requiredLevel << std::endl;
    std::cout << "Required Dex: " << requiredDex << std::endl;
    std::cout << "Required Str: " << requiredStr << std::endl;
    std::cout << "Required Int: " << requiredInt << std::endl;

    std::cout <<"Damage: " << minDmg << "-" << maxDmg << std::endl;
    std::cout <<"Attack Speed: " << attackSpeed << std::endl;
    std::cout <<"Crit Chance: " << critChance << std::endl;
    
    
    if(prefix.size() > 0 ){
        std::cout <<"Prefixes: " << std::endl;
        for(unsigned int i = 0; i < prefix.size(); i++){
            std::cout << prefix[i].name << std::endl;
        }
    }

    if(suffix.size() > 0){
        std::cout<<"Suffixes: " << std::endl;
        for(unsigned int i = 0; i < suffix.size(); i++){
            std::cout << suffix[i].name << std::endl;
        }
    }

    std::cout <<"Implicit: " << implicit << std::endl;
}