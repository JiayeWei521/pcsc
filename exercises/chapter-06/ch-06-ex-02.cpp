/*
 * ch-06-ex-02.cpp
 *
 * Class of 2*2 matrices
 *
 * Created on: Oct 21, 2023
 * Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include "ch-06-ex-02.hpp"
#include <iostream>
#include <cassert>

// Overridden constructor which initialises all entries to zero
Matrix::Matrix()
{
    entry11 = 0.0;
    entry12 = 0.0;
    entry21 = 0.0;
    entry22 = 0.0;
}

// Overridden copy constructor
Matrix::Matrix(const Matrix& otherMatrix)
{
    entry11 = otherMatrix.entry11;
    entry12 = otherMatrix.entry12;
    entry21 = otherMatrix.entry21;
    entry22 = otherMatrix.entry22;
}

// Constructor which specifies the four entries of the matrix and allocates these entries appropriately
Matrix::Matrix(double number11, double number12, double number21, double number22)
{
    entry11 = number11;
    entry12 = number12;
    entry21 = number21;
    entry22 = number22;
}

// Method for computing the determinant of a matrix
double Matrix::CalculateDeterminant() const
{
    return entry11 * entry22 - entry12 * entry21;
}

// Method for returning the inverse of a matrix (if exists)
Matrix Matrix::CalculateInverse() const
{
    double determinant = CalculateDeterminant();
    assert(determinant != 0.0);

    double inverse_entry11 = entry22 / determinant;
    double inverse_entry12 = -entry12 / determinant;
    double inverse_entry21 = -entry21 / determinant;
    double inverse_entry22 = entry11 / determinant;

    return {inverse_entry11, inverse_entry12, inverse_entry21, inverse_entry22};
}

// Overloading the assignment operator
Matrix& Matrix::operator=(const Matrix& B)
{
    entry11 = B.entry11;
    entry12 = B.entry12;
    entry21 = B.entry21;
    entry22 = B.entry22;

    return *this;
}

// Overloading the unary subtraction operator
Matrix Matrix::operator-() const
{
    Matrix A;

    A.entry11 = -entry11;
    A.entry12 = -entry12;
    A.entry21 = -entry21;
    A.entry22 = -entry22;

    return A;
}

// Overloading the binary addition operator
Matrix Matrix::operator+(const Matrix& B) const
{
    Matrix A;

    A.entry11 = entry11 + B.entry11;
    A.entry12 = entry12 + B.entry12;
    A.entry21 = entry21 + B.entry21;
    A.entry22 = entry22 + B.entry22;

    return A;
}

// Overloading the binary subtraction operator
Matrix Matrix::operator-(const Matrix& B) const
{
    Matrix A;

    A.entry11 = entry11 - B.entry11;
    A.entry12 = entry12 - B.entry12;
    A.entry21 = entry21 - B.entry21;
    A.entry22 = entry22 - B.entry22;

    return A;
}

// Method for multiplying a matrix by a specified double precision floating point variable
Matrix Matrix::MultiplyByScalar(double scalar)
{
    Matrix A;

    A.entry11 = scalar * entry11;
    A.entry12 = scalar * entry12;
    A.entry21 = scalar * entry21;
    A.entry22 = scalar * entry22;

    return A;
}

// Tests of the code (copy-paste from solution)
