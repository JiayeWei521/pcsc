/*
 * std_vector.cpp
 *
 * STL exercise 1: std::vector
 *
 * Created on: Nov 3, 2023
 * Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char* argv[])
{
    const int size = 100;

    const double start_value = 0.0;
    const double end_value = M_PI;

    const double step = (end_value - start_value) / double(size);

    std::vector<double> array;

    // append 100 values ranging from 0 to 2pi
    double point = start_value;
    for (int i = 0; i < size; i++)
    {
        array.push_back(point);
        point += step;
    }

    // Print the size of the vector to screen
    std::cout << array.size() << "\n" << std::endl;

    auto it = array.begin();
    auto end = array.end();

    for (; it != end; ++it)
    {
        double& val = *it;
    }

    // using range-loop and auto to construct another array
    std::vector<double> sin_array_1(size);
    for (auto &element : array)
    {
        sin_array_1.push_back(sin(element));
    }

    // using foreach
    std::vector<double> sin_array_2(size);
}

