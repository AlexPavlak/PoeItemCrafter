#include "../Headers/SwordOneHand.h"


SwordOneHand::SwordOneHand(){

}

void SwordOneHand::fillPrefix(){

    std::string currentLine;
    std::string type;
    float requiredLevel;
    float lowerMin;
    float lowerMax;
    float upperMin;
    float upperMax;
    std::string name;
    std::ifstream prefixes;

    //Retrieves the modlist from the SwordOneHandPrefix.txt file and adds
    //the mods that the item has a sufficient level to roll
    prefixes.open("../Mods/ModLists/swordOneHandPrefix.txt");
    if(!prefixes.is_open()) std::cout<<"File didnt open" << std::endl;
    while(prefixes >> type >> requiredLevel >> lowerMin >> lowerMax >> upperMin >> upperMax >> name){

        if(itemLevel >= requiredLevel){
            Mod newMod(type,requiredLevel,lowerMin,lowerMax,upperMin,upperMax,name);
            basePrefix.push_back(newMod);
        } 
    
    }

    prefixes.close();

}

void SwordOneHand::fillSuffix(){

    std::string currentLine;
    std::string type;
    float requiredLevel;
    float lowerMin;
    float lowerMax;
    float upperMin;
    float upperMax;
    std::string name;
    std::ifstream suffixes;

    //Retrieves the modlist from the SwordOneHandSuffix.txt file and adds
    //the mods that the item has a sufficient level to roll
    suffixes.open("../Mods/ModLists/swordOneHandSuffix.txt");
    if(!suffixes.is_open()) std::cout<<"File didnt open" << std::endl;
    while(suffixes >> type >> requiredLevel >> lowerMin >> lowerMax >> upperMin >> upperMax >> name){

        if(itemLevel >= requiredLevel){
            Mod newMod(type,requiredLevel,lowerMin,lowerMax,upperMin,upperMax,name);
            baseSuffix.push_back(newMod);
        }        
    }

    suffixes.close();

}