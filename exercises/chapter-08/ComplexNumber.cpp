/*
 * ComplexNumber.cpp
 *
 * Class of complex numbers
 *
 * Created on: Oct 18, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include "ComplexNumber.hpp"
#include <cmath>

// Overridden default constructor
// Set real and imaginary parts to zero
ComplexNumber:: ComplexNumber()
{
    mRealPart = 0.0;
    mImaginaryPart = 0.0;
}

// Constructor that sets complex number z=x+iy
ComplexNumber::ComplexNumber(double x, double y)
{
    mRealPart = x;
    mImaginaryPart = y;
}

// Overridden copy constructor.
ComplexNumber::ComplexNumber(const ComplexNumber& otherComplexNumber)
{
    mRealPart = otherComplexNumber.mRealPart;
    mImaginaryPart = otherComplexNumber.mImaginaryPart;
}

// Real number constructor
ComplexNumber::ComplexNumber(const double& x)
{
    mRealPart = x;
    mImaginaryPart = 0.0;
}

// Method 1 for accessing the corresponding private members:
// create a new public method
double ComplexNumber::GetRealPart() const
{
    return mRealPart;
}
double ComplexNumber::GetImaginaryPart() const
{
    return mImaginaryPart;
}

// Method 2 for accessing the corresponding private members:
// write a friend function of the class
double RealPart(const ComplexNumber& z)
{
    return z.mRealPart;
}
double ImaginaryPart(const ComplexNumber& z)
{
    return z.mImaginaryPart;
}

// Method for computing the modulus of a complex number
double ComplexNumber::CalculateModulus() const
{
    return sqrt(mRealPart * mRealPart + mImaginaryPart * mImaginaryPart);
}

// Method for computing the argument of a complex number
double ComplexNumber::CalculateArgument() const
{
    return atan2(mImaginaryPart, mRealPart);
}

// Method for raising complex number to the power n, using De Moivre's theorem
// first complex number must be converted to polar form
ComplexNumber ComplexNumber::CalculatePower(double n) const
{
    double modulus = CalculateModulus();
    double argument = CalculateArgument();
    double mod_of_result = pow(modulus, n);
    double arg_of_result = argument * n;
    double real_part = mod_of_result * cos(arg_of_result);
    double imag_part = mod_of_result * sin(arg_of_result);
    ComplexNumber z(real_part, imag_part);
    return z;
}

// Method for returning the conjugate of a complex number
ComplexNumber ComplexNumber::CalculateConjugate() const
{
    double real_part = mRealPart;
    double imag_part = -mImaginaryPart;
    ComplexNumber z = ComplexNumber(real_part, imag_part);
    return z;
}

// Method for setting a complex number to its complex conjugate
void ComplexNumber::SetToConjugate(ComplexNumber& z)
{
    double imag_part = -z.mImaginaryPart;
    z.mImaginaryPart = imag_part;
}

// Overloading the = (assignment) operator
ComplexNumber& ComplexNumber::operator=(const ComplexNumber& z)
{
    mRealPart = z.mRealPart;
    mImaginaryPart = z.mImaginaryPart;
    return *this;
}

// Overloading the unary - operator
ComplexNumber ComplexNumber::operator-() const
{
    ComplexNumber w;
    w.mRealPart = -mRealPart;
    w.mImaginaryPart = -mImaginaryPart;
    return w;
}

// Overloading the binary + operator
ComplexNumber ComplexNumber::operator+(const ComplexNumber& z) const
{
    ComplexNumber w;
    w.mRealPart = mRealPart + z.mRealPart;
    w.mImaginaryPart = mImaginaryPart + z.mImaginaryPart;
    return w;
}

// Overloading the binary - operator
ComplexNumber ComplexNumber::operator-(const ComplexNumber& z) const
{
    ComplexNumber w;
    w.mRealPart = mRealPart - z.mRealPart;
    w.mImaginaryPart = mImaginaryPart - z.mImaginaryPart;
    return w;
}

// Overloading the insertion << operator
std::ostream& operator<<(std::ostream& output, const ComplexNumber& z)
{
    // Format as "(a+bi)" or as "(a-bi)"

    output << "(" << z.mRealPart << " ";

    if (z.mImaginaryPart >= 0.0)
    {
        output << "+" << z.mImaginaryPart << ")";
    }
    else
    {
        output << "-" << -z.mImaginaryPart << ")";
    }
    return output;
}