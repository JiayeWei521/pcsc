/*
 * ch-08-ex-03.cpp
 *
 * STL vectors of complex numbers, investigate the functionality of STL
 *
 * Created on: Nov 06, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <vector>
#include "ComplexNumber.hpp"

int main(int argc, char* argv[])
{
    std::vector<ComplexNumber> vector;

    vector.reserve(6);

    ComplexNumber c1 = ComplexNumber();
    ComplexNumber c2 = ComplexNumber(2.0);
    ComplexNumber c3 = ComplexNumber(1.0, 1.0);

    vector.push_back(c1);
    vector.push_back(c2);
    vector.push_back(c3);

    std::cout << "Length of vector is " << vector.size() << "\n";

    std::cout << "Entries of vector are \n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << vector[i] << "\n";
    }
}