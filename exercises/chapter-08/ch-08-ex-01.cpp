/*
 * ch-08-ex-01.cpp
 *
 *
 *
 * Created on: Oct 30, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <cmath>
#include "ProbabilityOfRain.hpp"

int main()
{
    ProbabilityOfRain<7> v;
    v[0] = 0.78;
    v[1] = -2*pow(10, -6);
}