#ifndef ROLLERS_H
#define ROLLERS_H

#include <random>
#include <chrono>

class Rollers{

    private:
    unsigned seed;
    std::default_random_engine generator;
    std::random_device rd;
    std::mt19937 mt;

    public:
    Rollers();
    float boundedFloatRoller(float lowerBound, float upperBound);
    int boundedIntRoller(int lowerBound, int upperBound);
};

#endif