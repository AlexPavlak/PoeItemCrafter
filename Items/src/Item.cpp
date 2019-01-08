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
    
}

void Item::transmute(){
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,6);
    int dice_roll = distribution(generator);
}

    
