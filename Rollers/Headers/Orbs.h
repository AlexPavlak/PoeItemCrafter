#ifndef ORBS_H
#define ORBS_H
#include "../../Items/Headers/Item.h"
#include <vector>
#include <random>
#include <iostream>

class Orbs{

    public:
    static void transmute(Item &item, std::vector<Mod> &rollingPrefixes, std::vector<Mod> &rollingSuffixes);
};

#endif