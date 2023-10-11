/*
 * ch-04-ex-03.cpp
 *
 * Dynamic allocation of memory to matrices
 *
 * Created on: Oct 6, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    int rows = 2, cols = 2;

    // This for loop is designed to check if the memory is allocated and de-allocated properly.
    for (int i = 0; i < 1000000000; i++)
    {
        double** A = new double* [rows];
        double** B = new double* [rows];
        double** C = new double* [rows];

        for (int i = 0; i < 2; i++)
        {
            A[i] = new double [cols];
            B[i] = new double [cols];
            C[i] = new double [cols];
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                A[i][j] = (double)(i+j);
                B[i][j] = (double)(i*j);
                C[i][j] = A[i][j] + B[i][j];
                // std::cout << C[i][j] << "\t";
            }
            // std::cout << "\n";
        }

        // de-allocate memory
        for (int i = 0; i < rows; i++)
        {
            delete[] A[i];
            delete[] B[i];
            delete[] C[i];
        }
        delete[] A;
        delete[] B;
        delete[] C;
    }
}