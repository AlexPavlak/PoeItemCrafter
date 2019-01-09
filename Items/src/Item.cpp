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



    
