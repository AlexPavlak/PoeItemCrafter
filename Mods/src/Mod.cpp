#include "../Headers/Mod.h"

Mod::Mod(std::string newType, int newRequiredLevel, float newLowerMin, float newLowerMax,
        float newUpperMin, float newUpperMax, std::string newName){

            type = newType;
            requiredLevel = newRequiredLevel;
            lowerMin = newLowerMin;
            lowerMax = newLowerMax;
            upperMin = newUpperMin;
            upperMax = newUpperMax;
            name = newName;
        }