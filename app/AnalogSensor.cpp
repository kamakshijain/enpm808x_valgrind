/**
 *  @file    AnalogSensor.cpp
 *  @author  Kamakshi Jain
 *  @copyright Kamakshi Jain
 *  @brief Valgrind exercise enpm808x
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(), readings->end(), 0.0)
    /readings->size();
    delete readings;  // 2nd Fix - deleting the variable/pointer readings
    return result;
}


