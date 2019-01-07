#include "../Headers/SwordOneHand.h"


SwordOneHand::SwordOneHand(){

    std::string currentLine;
    std::string type;
    int requiredLevel;
    int lowerMin;
    int lowerMax;
    int upperMin;
    int upperMax;
    std::string name;
    std::ifstream prefixes;
    std::ifstream suffixes;

    prefixes.open("../Mods/ModLists/swordOneHandPrefix.txt");
    if(!prefixes.is_open()) std::cout<<"File didnt open" << std::endl;
    std::cout << "Reading Prefixes." << std::endl;
    while(prefixes >> type >> requiredLevel >> lowerMin >> lowerMax >> upperMin >> upperMax >> name){

        std::cout<<"itemLevel: " << requiredLevel << std::endl;
        if(itemLevel >= requiredLevel){

            Mod newMod(type,requiredLevel,lowerMin,lowerMax,upperMin,upperMax,name);
            basePrefix.push_back(newMod);
        } 
    
    }

    prefixes.close();

    suffixes.open("../Mods/ModLists/swordOneHandSuffix.txt");

    std::cout << "Reading Suffixes." << std::endl;
    while(suffixes >> type >> requiredLevel >> lowerMin >> lowerMax >> upperMin >> upperMax >> name){

        if(itemLevel >= requiredLevel){

            Mod newMod(type,requiredLevel,lowerMin,lowerMax,upperMin,upperMax,name);
            baseSuffix.push_back(newMod);
        }        
    }

    suffixes.close();
}