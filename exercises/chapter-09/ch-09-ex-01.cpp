//
// Created by Jiaye Wei on 19.11.2023.
//

#include <iostream>
#include <fstream>
#include "Exception.hpp"
#include "FileNotOpenException.hpp"
#include "OutOfRangeException.hpp"

typedef std::vector<double> Vector;

void ReadFile(const std::string& fileName, Vector x, Vector y)
{
    std::ifstream read_file(fileName.c_str());

    if (read_file.is_open() == false)
    {
        throw FileNotOpenException("File can't be opened");
    }

    // Since the vectors are allocated with 3 elements,
    // when i = 3, the at(i) method will throw a std::out_of_range exception
    for (int i =0; i < 6; i++)
    {
        read_file >>
    }
}

int main()
{
    // Allocating a smaller vector than required
    std::vector<double> x(3);
    std::vector<double> y(3);

    try
    {

    }
}