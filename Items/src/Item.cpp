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

void Item::setItemLevel(int newLevel){itemLevel = newLevel;}

int Item::getItemLevel(){return itemLevel;}





    
