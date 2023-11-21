/*
 * std_vector.cpp
 *
 * STL exercise 1: std::vector
 *
 * Created on: Nov 3, 2023
 *      Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <cassert>
#include <iomanip>
#include <algorithm>
#include <numeric>

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

    // another way of creating this array by using iota
    std::vector<double> array1(size);
    std::iota(array1.begin(), array1.end(), 0);
    std::for_each(array1.begin(), array1.end(), [](double& element){ return 2.0 * M_PI * element / size;});


    // Print the size of the vector to screen
    std::cout << array.size() << std::endl;

    auto it = array.begin();
    auto end = array.end();
    for (; it != end; ++it)
    {
        double& val = *it;
    }


    // using range-loop and auto to construct another array
    std::vector<double> v1(size);
//    std::cout << "The sin values are " << "\n" << std::endl;
    for (auto &element : array)
    {
        v1.push_back(sin(element));
//        std::cout << sin(element) << "\n" << std::endl;
    }


    // using for_each
    std::vector<double> v2(size);
    std::for_each(array.begin(), array.end(), [&v2](double& element){v2.push_back(sin(element));});

    // Iterate once more to generate a file containing two columns (CSV format) with the values of array and sin_array.
    std::ofstream write_output("ex_stl_vector_result.csv");
    assert(write_output.is_open());

    write_output.precision(20);
    std::for_each(array.begin(), array.end(), [&write_output](double& element){write_output << element << "\t" << sin(element) << "\n" << std::endl;});

    write_output.close();
}

