/*
 * ch-04-ex-03.cpp
 *
 * Dynamic allocation of memory to vectors
 *
 * Created on: Oct 4, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    // This for loop is designed to check if the memory is allocated and de-allocated properly.
    for (int i = 0; i < 1000000000; i++)
    {
        // assign values to two integer variables.
        double* x = new double [3];
        double* y = new double [3];

        // assign values to each of the entries
        for (int i = 0; i < 3; i++)
        {
            x[i] = double(i);
            y[i] = 3.0 * x[i];
        }

        // calculate the dot product of these vectors and print it out
        double dot_product = 0.0;
        for (int i = 0; i < 3; i++)
        {
            dot_product += x[i] * y[i];
        }

        //std::cout << "The dot product of these two vectors is: " << dot_product << "\n";
        delete[] x;
        delete[] y;
    }
}