#ifndef ITEM_H
#define ITEM_H

#include <vector>
#include <random>
#include "../../Mods/Headers/Mod.h"
//#include "../../Mods/Headers/WeaponHeaders.h"

class Item{

public:
int itemLevel;
int rarity;
std::vector <Mod> prefix;
std::vector <Mod> suffix;
int requiredLevel;
int requiredDex;
int requiredStr;
int requiredInt;
std::string modList;


Item();
Item(int newiLevel, int newRarity, int newReqLevel, 
     int newReqDex, int newReqStr, int newReqInt);


};
#endif