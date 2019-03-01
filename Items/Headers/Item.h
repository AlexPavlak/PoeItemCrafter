#ifndef ITEM_H
#define ITEM_H

#include <vector>
#include <random>
#include "../../Mods/Headers/Mod.h"
//#include "../../Mods/Headers/WeaponHeaders.h"

class Item{

private:

int itemLevel;
int rarity;
int requiredLevel;
int requiredDex;
int requiredStr;
int requiredInt;

public:
std::vector <Mod> prefix;
std::vector <Mod> suffix;
std::string modList;

//Constructors
Item();
Item(int newiLevel, int newRarity, int newReqLevel, 
     int newReqDex, int newReqStr, int newReqInt);

//Getters and setters
void setItemLevel(int);
int getItemLevel();
void setRarity(int);
int getRarity();
void setRequiredLevel(int);
int getRequiredLevel();
void setRequiredDex(int);
int getRequiredDex();
void setRequiredStr(int);
int getRequiredStr();
void setRequiredInt(int);
int getRequiredInt();
};
#endif