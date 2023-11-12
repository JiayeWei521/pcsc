//
// Created by Jiaye Wei on 28.10.2023.
//

#ifndef ABSTRACTODESOLVERDEF
#define ABSTRACTODESOLVERDEF

class AbstractOdeSolver
{
protected:
    double stepSize;
    double initialTime;
    double finalTime;
    double initialValue;

    double (*function_rhs)(double y, double t);

public:
    // Constructor and destructor
    AbstractOdeSolver();
    virtual ~AbstractOdeSolver();

    // Other public methods
    void SetStepSize(double h);
    void SetTimeInterval (double t0, double t1);
    void SetInitialValue(double y0);
    void SetRightHandSide(double (*f)(double y, double t));

    virtual double RightHandSide(double y, double t) = 0;
    virtual void SolveEquation() = 0;
};


#endif