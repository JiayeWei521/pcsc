//
// Created by Jiaye Wei on 28.10.2023.
//

#include "AbstractOdeSolver.hpp"

AbstractOdeSolver::AbstractOdeSolver() {}

AbstractOdeSolver::~AbstractOdeSolver() {}

void AbstractOdeSolver::SetStepSize(double h)
{
    stepSize = h;
}

void AbstractOdeSolver::SetTimeInterval(double t0, double t1)
{
    initialTime = t0;
    finalTime = t1;
}

void AbstractOdeSolver::SetInitialValue(double y0)
{
    initialValue = y0;
}

void AbstractOdeSolver::SetRightHandSide(double (*f)(double, double))
{
    function_rhs = f;
}

double AbstractOdeSolver::RightHandSide(double y, double t)
{
    return function_rhs(y, t);
}