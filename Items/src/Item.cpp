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




    
