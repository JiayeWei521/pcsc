/*
 * ch-01-ex-04.cpp
 *
 *
 *
 * Created on: Oct 8, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>

int main(int argc, char *argv[])
{
    double A[2][2] = { {1, 2}, {3, 4} };
    double B[2][2] = { {5, 6}, {7, 8} };

    double C[2][2];
    double D[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            D[i][j] = 0.0;
            for (int k = 0; k < 2; k++)
            {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // print the entries of C and D
    std::cout << "The entries of C are: " << "\n";
    std::cout << C[0][0] << " " << C[0][1] << "\n";
    std::cout << C[1][0] << " " << C[1][1] << "\n";

    std::cout << "The entries of D are: " << "\n";
    std::cout << D[0][0] << " " << D[0][1] << "\n";
    std::cout << D[1][0] << " " << D[1][1] << "\n";

    return 0;
}