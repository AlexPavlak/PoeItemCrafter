#ifndef MOD_H
#define MOD_H
#include <string>
#include "../../Rollers/Headers/Rollers.h"


class Mod{

    protected:
    std::string type;
    int requiredLevel;

    

    public:
    float lowerMin;
    float lowerMax;
    float upperMin;
    float upperMax;
    std::string name;
    Mod();
    Mod(std::string newType, int newRequiredLevel, float newLowerMin, float newLowerMax,
    float newUpperMin, float newUpperMax, std::string newName);

};

#endif