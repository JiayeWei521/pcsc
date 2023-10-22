//
// Created by Jiaye Wei on 21.10.2023.
//

#ifndef MATRIXHEADERDEF
#define MATRIXHEADERDEF

class Matrix
{
private:
    double entry11;
    double entry12;
    double entry21;
    double entry22;

public:
    Matrix();
    Matrix(const Matrix& otherMatrix);
    Matrix(double entry11, double entry12, double entry21, double entry22);

    double CalculateDeterminant() const;
    Matrix CalculateInverse() const;

    Matrix& operator=(const Matrix& M);
    Matrix operator-() const;
    Matrix operator+(const Matrix& M) const;
    Matrix operator-(const Matrix& M) const;

    Matrix MultiplyByScalar(double scalar);
};

#endif
