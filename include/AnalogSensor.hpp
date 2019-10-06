/**
 *  @file    AnalogSensor.hpp
 *  @author  Kamakshi Jain
 *  @copyright Kamakshi Jain
 *  @brief Valgrind exercise enpm808x
 */
#pragma once

#include <iostream>

class AnalogSensor {
 public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};
