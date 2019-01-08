#ifndef ITEM_H
#define ITEM_H

#include <vector>
#include <random>
#include "../../Mods/Headers/Mod.h"

class Item{
protected:
int itemLevel;
int rarity;
std::vector <Mod> prefix;
std::vector <Mod> suffix;
int requiredLevel;
int requiredDex;
int requiredStr;
int requiredInt;

public:
Item();
Item(int newiLevel, int newRarity, int newReqLevel, 
     int newReqDex, int newReqStr, int newReqInt);

void transmute();
void alteration();

};
#endif