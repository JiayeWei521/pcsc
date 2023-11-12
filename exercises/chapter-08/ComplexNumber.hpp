//
// Created by Jiaye Wei on 18.10.2023.
//

#ifndef COMPLEXNUMBERHEADERDEF
#define COMPLEXNUMBERHEADERDEF

#include <iostream>

class ComplexNumber
{
private:
    double mRealPart;
    double mImaginaryPart;

public:
    ComplexNumber();
    ComplexNumber(double x, double y);
    ComplexNumber(const ComplexNumber& otherComplexNumber);
    ComplexNumber(const double& x);

    double GetRealPart() const;
    double GetImaginaryPart() const;
    friend double RealPart(const ComplexNumber& z);
    friend double ImaginaryPart(const ComplexNumber& z);
    double CalculateModulus() const;
    double CalculateArgument() const;
    ComplexNumber CalculatePower(double n) const;
    ComplexNumber CalculateConjugate() const;
    void SetToConjugate(ComplexNumber& z);

    ComplexNumber& operator=(const ComplexNumber& z);
    ComplexNumber operator-() const;
    ComplexNumber operator+(const ComplexNumber& z) const;
    ComplexNumber operator-(const ComplexNumber& z) const;

    friend std::ostream& operator<<(std::ostream& output, const ComplexNumber& z);
};

#endif