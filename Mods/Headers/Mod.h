#ifndef MOD_H
#define MOD_H
#include <string>


class Mod{

    protected:
    std::string type;
    int requiredLevel;
    int lowerMin;
    int lowerMax;
    int upperMin;
    int upperMax;
    

    public:
    std::string name;
    Mod(std::string newType, int newRequiredLevel, int newLowerMin, int newLowerMax,
        int newUpperMin, int newUpperMax, std::string newName);

};

#endif