/*
 * ch-05-ex-03.cpp
 *
 * Swap values using pointers and references
 *
 * Created on: Oct 13, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <fstream>
#include <iostream>

void SwapValuesOfTwoNumbersUsingPointers(double* p_x, double* p_y);

void SwapValuesOfTwoNumbersUsingReferences(double& p_i, double& p_j);

// code that calls these 2 functions
int main(int argc, char *argv[])
{
    double x1 = 1.0;
    double x2 = 2.0;

    std::cout << "Before, " << "\n";
    std::cout << "the value of x1 is: " << x1 << "\n";
    std::cout << "the value of x2 is: " << x2 << "\n";
    std::cout << "\n";

    SwapValuesOfTwoNumbersUsingPointers(&x1, &x2);

    std::cout << "After swap using pointers," << "\n";
    std::cout << "the value of x1 becomes: " << x1 << "\n";
    std::cout << "the value of x2 becomes: " << x2 << "\n";

    std::cout << "\n\n";

    double y1 = 1.0;
    double y2 = 2.0;

    std::cout << "Before, " << "\n";
    std::cout << "the value of y1 is: " << y1 << "\n";
    std::cout << "the value of y2 is: " << y2 << "\n";
    std::cout << "\n";

    SwapValuesOfTwoNumbersUsingReferences(y1, y2);

    std::cout << "After swap using references," << "\n";
    std::cout << "the value of y1 becomes: " << y1 << "\n";
    std::cout << "the value of y2 becomes: " << y2 << "\n";
}

void SwapValuesOfTwoNumbersUsingPointers(double* p_x, double* p_y)
{
    double* p_z = new double;
    *p_z = *p_x;
    *p_x = *p_y;
    *p_y = *p_z;

    delete p_z;
}

void SwapValuesOfTwoNumbersUsingReferences(double& r_x, double& r_y)
{
    double z;
    z = r_x;
    r_x = r_y;
    r_y = z;
}

