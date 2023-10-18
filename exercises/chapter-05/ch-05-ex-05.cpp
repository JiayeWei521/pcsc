/*
 * ch-05-ex-05.cpp
 *
 * Multiply two matrices
 *
 * Created on: Oct 13, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <fstream>
#include <iostream>
#include <cassert>

double **Multiply(double** matrix1, int rows1, int cols1,
                  double** matrix2, int rows2, int cols2);

int main(int argc, char *argv[])
{
    // Ask users for the size of both two matrices
    int rows1, cols1, rows2, cols2;

    std::cout << "Please specify the size of the first matrix. \n";
    std::cout << "Enter the number of rows: \n";
    std::cin >> rows1;
    std::cout << "Enter the number of columns: \n";
    std::cin >> cols1;

    std::cout << "Please specify the size of the second matrix. \n";
    std::cout << "Enter the number of rows: \n";
    std::cin >> rows2;
    std::cout << "Enter the number of columns: \n";
    std::cin >> cols2;

    // Create two matrices of the specified sizes and assign values to their entries
    double** matrix1 = new double* [rows1];

    std::cout << "The first matrix is: " << "\n";
    for (int i=0; i < rows1; i++)
    {
        matrix1[i] = new double [cols1];
        for (int j=0; i < cols1; j++)
        {
            matrix1[i][j] = i+j+1.0;
            std::cout << matrix1[i][j] << " \n"[j == cols1-1];
        }
    }

    double** matrix2 = new double* [rows2];

    std::cout << "The second matrix is: " << "\n";
    for (int i=0; i < rows2; i++)
    {
        matrix2[i] = new double [cols2];
        for (int j=0; i < cols2; j++)
        {
            matrix2[i][j] = 2.0*(i+j);
            std::cout << matrix2[i][j] << " \n"[j == cols2-1];
        }
    }

    // Multiply these two matrices
    double** result = Multiply(matrix1, rows1, cols1, matrix2, rows2, cols2);
    std::cout << "The product of these two matrices are: " << "\n";
    for (int i=0; i < rows1; i++)
    {
        for (int j=0; i < cols2; j++)
        {
            std::cout << result[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

double **Multiply(double** matrix1, int rows1, int cols1,
                  double** matrix2, int rows2, int cols2)
{
    // Assert that the matrices are of suitable sizes to be multiplied
    assert(cols1 == rows2);

    // Compute their product
    double** product;
    product = new double* [rows1];
    for (int i=0; i<rows1; i++)
    {
        product[i] = new double [cols2];
        for (int j=0; j<cols2; j++)
        {
            product[i][j] = 0.0;
            for (int k=0; k<cols1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return product;
}