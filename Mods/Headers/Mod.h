#ifndef MOD_H
#define MOD_H
#include <string>
#include "../../Rollers/Headers/Rollers.h"


class Mod{

    protected:
    std::string type;
    std::string name;
    int requiredLevel;
    float lowerMin;
    float lowerMax;
    float upperMin;
    float upperMax;
    
    public:  
    Mod();
    Mod(std::string newType, int newRequiredLevel, float newLowerMin, float newLowerMax,
    float newUpperMin, float newUpperMax, std::string newName);
    std::string getType();//
    void setType(std::string);//
    std::string getName(); //
    void setName(std::string);//
    int getReqLvl();
    void setReqLvl(int);
    float getLowerMin();
    void setLowerMin(float);
    float getLowerMax();
    void setLowerMax(float);
    float getUpperMin();
    void setUpperMin(float);
    float getUpperMax();
    void setUpperMax(float);


};

#endif