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


    prefixes.open("../Mods/ModLists/swordOneHandPrefix.txt");
    if(!prefixes.is_open()) std::cout<<"File didnt open" << std::endl;
    while(prefixes >> type >> requiredLevel >> lowerMin >> lowerMax >> upperMin >> upperMax >> name){

        if(itemLevel >= requiredLevel){
            std::cout << "Item Level is " << itemLevel << std::endl;
            std::cout << "Adding " << name << " to the prefix list." << std::endl;
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

    suffixes.open("../Mods/ModLists/swordOneHandSuffix.txt");

    while(suffixes >> type >> requiredLevel >> lowerMin >> lowerMax >> upperMin >> upperMax >> name){

        if(itemLevel >= requiredLevel){
            std::cout << "Adding " << name << " to the suffix list." << std::endl;
            Mod newMod(type,requiredLevel,lowerMin,lowerMax,upperMin,upperMax,name);
            baseSuffix.push_back(newMod);
        }        
    }

    suffixes.close();

}