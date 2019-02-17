#include "../Headers/Rollers.h"

Rollers::Rollers(){

    seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
}

float Rollers::boundedFloatRoller(float lowerBound, float upperBound){
    std::uniform_real_distribution<float> distribution(lowerBound,upperBound);

    float result = distribution(generator);
    return result;
}

int Rollers::boundedIntRoller(int lowerBound, int upperBound){

    std::uniform_int_distribution<int> distribution(lowerBound,upperBound);

    int result = distribution(generator);
    return result;
}
