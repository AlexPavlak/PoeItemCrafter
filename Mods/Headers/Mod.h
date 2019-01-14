#ifndef MOD_H
#define MOD_H
#include <string>


class Mod{

    protected:
    std::string type;
    int requiredLevel;
    float lowerMin;
    float lowerMax;
    float upperMin;
    float upperMax;
    

    public:
    std::string name;
    Mod(std::string newType, int newRequiredLevel, float newLowerMin, float newLowerMax,
        float newUpperMin, float newUpperMax, std::string newName);

};

#endif