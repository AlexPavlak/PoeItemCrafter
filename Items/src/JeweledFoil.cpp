#include "../Headers/JeweledFoil.h"

JeweledFoil::JeweledFoil(int newLevel){
    implicit = "+25\% to Global Critical Strike Multiplier";
    minDmg = 32;
    maxDmg = 60;
    critChance = 5.5f;
    attackSpeed = 1.6f;
    itemLevel = newLevel;
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
    
    std::cout <<"Prefixes:" << std::endl;
    for(int i = 0; i < basePrefix.size(); i++){
        std::cout << basePrefix[i].name << std::endl;
    }

    for(int i = 0; i < baseSuffix.size(); i++){
        std::cout << baseSuffix[i].name << std::endl;
    }

    std::cout <<"Implicit: " << implicit << std::endl;
}