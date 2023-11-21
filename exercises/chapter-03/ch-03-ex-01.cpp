//
// Created by Jiaye Wei on 17.11.2023.
//

#include <iostream>
#include <fstream>
#include <cassert>

int main(int argc, char* argv[])
{
    double x[4] = {0.0, 1.0, 1.0, 1.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    // print the arrays to a file called x_and_y.dat
    std::ofstream write_output("x_and_y.dat");
    assert(write_output.is_open());



    return 0;
}