#include "../Headers/Rollers.h"

Rollers::Rollers(){
    std::mt19937 newMt(rd());
    mt = newMt;
}

float Rollers::boundedFloatRoller(float lowerBound, float upperBound){
    std::uniform_real_distribution<float> distribution(lowerBound,upperBound);

    float result = distribution(mt);
    result = distribution(mt);
    return result;
}

int Rollers::boundedIntRoller(int lowerBound, int upperBound){

    std::uniform_int_distribution<int> distribution(lowerBound,upperBound);

    int result = distribution(mt);
    result = distribution(mt);
    return result;
}
