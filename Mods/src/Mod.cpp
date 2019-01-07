#include "../Headers/Mod.h"

Mod::Mod(std::string newType, int newRequiredLevel, int newLowerMin, int newLowerMax,
        int newUpperMin, int newUpperMax, std::string newName){

            type = newType;
            requiredLevel = newRequiredLevel;
            lowerMin = newLowerMin;
            lowerMax = newLowerMax;
            upperMin = newUpperMin;
            upperMax = newUpperMax;
            name = newName;
        }