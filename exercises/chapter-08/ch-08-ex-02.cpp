/*
 * ch-08-ex-02.cpp
 *
 * Use templates to write a single function
 * which calculates the absolute value of an integer or a double precision floating point number.
 *
 * Created on: Oct 29, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>

template <typename T> T CalculateAbsoluteValue(T number)
{
    T abs_value;
    if (number >= 0)
    {
        abs_value = number;
    }
    else
    {
        abs_value = -number;
    }
    return abs_value;
}

int main()
{
    int i = -23;
    std::cout << "The absolute value of " <<  i  <<" is: " << CalculateAbsoluteValue(i) << "\n";

    double x = 12;
    std::cout << "The absolute value of " <<  x <<" is: "<< CalculateAbsoluteValue(x) << "\n";
}