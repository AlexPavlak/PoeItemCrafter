#include "../Headers/Item.h"

Item::Item(int newiLevel, int newRarity, int newReqLevel, int newReqDex, int newReqStr, int newReqInt){

    itemLevel = newiLevel;
    rarity = newRarity;
    requiredLevel = newReqLevel;
    requiredDex = newReqDex;
    requiredStr = newReqStr;
    requiredInt = newReqInt;
}

Item::Item(){
    rarity = 1;
}

//Getters and Setters for member variables
void Item::setItemLevel(int newLevel){itemLevel = newLevel;}

int Item::getItemLevel(){return itemLevel;}

void Item::setRarity(int newRarity){rarity = newRarity;}

int Item::getRarity(){return rarity;}

void Item::setRequiredLevel(int newLevel){itemLevel = newLevel;}

int Item::getRequiredLevel(){return itemLevel;}

void Item::setRequiredDex(int newDex){requiredDex = newDex;}

int Item::getRequiredDex(){return requiredDex;}

void Item::setRequiredStr(int newStr){requiredStr = newStr;}

int Item::getRequiredStr(){return requiredStr;}

void Item::setRequiredInt(int newInt){requiredStr = newInt;}

int Item::getRequiredInt(){return requiredInt;}

std::string Item::getModList(){return modList;}

void Item::addToModList(std::string newMod){
    modList += newMod;
}

const std::vector<Mod>& Item::getPrefix(){return prefix;}

void Item::addToPrefix(Mod mod){prefix.push_back(mod);}

const std::vector<Mod>& Item::getSuffix(){return suffix;}

void Item::addToSuffix(Mod mod){suffix.push_back(mod);}

int Item::getPrefixSize(){return prefix.size();}

int Item::getSuffixSize(){return suffix.size();}

Mod Item::getPrefixAt(int position){return prefix[position];}

Mod Item::getSuffixAt(int position){return suffix[position];}


    
