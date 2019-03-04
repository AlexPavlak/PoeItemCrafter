#ifndef SWORDONEHAND_H
#define SWORDONEHAND_H
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "./Weapon.h"

class SwordOneHand : public Weapon{
    protected:
    std::vector <Mod> basePrefix;
    std::vector <Mod> baseSuffix;

    public: 
    SwordOneHand();

    void fillPrefix();
    void fillSuffix();

    const std::vector<Mod>& getBasePrefix();
    void addToBasePrefix(Mod mod);
    const std::vector<Mod>& getBaseSuffix();
    void addToBaseSuffix(Mod mod);
    int getBasePrefixSize();
    int getBaseSuffixSize();
    Mod getBasePrefixAt(int);
    Mod getBaseSuffixAt(int);


};

#endif