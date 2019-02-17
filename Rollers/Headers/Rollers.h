#ifndef ROLLERS_H
#define ROLLERS_H

#include <random>
#include <chrono>

class Rollers{

    private:
    unsigned seed;
    std::default_random_engine generator;

    public:
    Rollers();
    float boundedFloatRoller(float lowerBound, float upperBound);
    int boundedIntRoller(int lowerBound, int upperBound);
};

#endif