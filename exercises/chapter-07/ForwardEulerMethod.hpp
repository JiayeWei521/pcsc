//
// Created by Jiaye Wei on 28.10.2023.
//

#ifndef FORWARDEULERMETHODDEF
#define FORWARDEULERMETHODDEF

#include "AbstractOdeSolver.hpp"

class ForwardEulerMethod : public AbstractOdeSolver
{
    ForwardEulerMethod();
    ForwardEulerMethod(double h);
    ~ForwardEulerMethod();

    void SolveEquation() const;
};

#endif
