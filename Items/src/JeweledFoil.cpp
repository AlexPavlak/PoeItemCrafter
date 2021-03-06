#include "../Headers/JeweledFoil.h"

JeweledFoil::JeweledFoil(int newLevel){
    implicit = "+25\% to Global Critical Strike Multiplier";
    minDmg = 32;
    maxDmg = 60;
    setRequiredLevel(68);
    setRequiredDex(212);
    setRequiredInt(0);
    setRequiredStr(0);
    critChance = 5.5f;
    attackSpeed = 1.6f;
    setItemLevel(newLevel);
    fillPrefix();
    fillSuffix();
}

void JeweledFoil::printItem(){

    std::cout << "Item Level: " << getItemLevel() << std::endl;
    std::cout << "Rarity: " << getRarity() << std::endl;
    std::cout << "Required Level: " << getRequiredLevel() << std::endl;
    std::cout << "Required Dex: " << getRequiredDex() << std::endl;
    std::cout << "Required Str: " << getRequiredStr() << std::endl;
    std::cout << "Required Int: " << getRequiredInt() << std::endl;

    std::cout << "Damage: " << minDmg << "-" << maxDmg << std::endl;
    std::cout << "Attack Speed: " << attackSpeed << std::endl;
    std::cout << "Crit Chance: " << critChance << std::endl;
    
    
    if(getPrefixSize() > 0 ){
        std::cout <<"Prefixes: " << std::endl;
        for(unsigned int i = 0; i < getPrefixSize(); i++){
            std::cout << getPrefixAt(i).getName() << std::endl;
        }
    }

    if(getSuffixSize() > 0){
        std::cout<<"Suffixes: " << std::endl;
        for(unsigned int i = 0; i < getSuffixSize(); i++){
            std::cout << getSuffixAt(i).getName() << std::endl;
        }
    }

    std::cout <<"Implicit: " << implicit << std::endl;
    std::cout << getModList() << std::endl;
}

std::string JeweledFoil::getImplicit(){return implicit;}

void JeweledFoil::setImplicit(std::string newImplicit){implicit = newImplicit;}