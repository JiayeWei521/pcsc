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

};

#endif
