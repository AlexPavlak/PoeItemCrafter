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
Mod::Mod(){}


std::string Mod::getType(){return type;}

void Mod::setType(std::string newType){type = newType;}

std::string Mod::getName(){return name;}

int Mod::getReqLvl(){return requiredLevel;}

void Mod::setReqLvl(int newLvl){requiredLevel = newLvl;}

float Mod::getLowerMin(){return lowerMin;}

void Mod::setLowerMin(float newMin){ lowerMin = newMin;}

float Mod::getLowerMax(){return lowerMax;}

void Mod::setLowerMax(float newMax){lowerMax = newMax;}

float Mod::getUpperMin(){return upperMin;}

void Mod::setUpperMin(float newMin){upperMin = newMin;}

float Mod::getUpperMax(){return upperMax;}

void Mod::setUpperMax(float newMax){upperMax = newMax;}