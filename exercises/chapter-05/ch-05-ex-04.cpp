/*
 * ch-05-ex-04.cpp
 *
 * Function which computes the mean and standard deviation of an array
 *
 * Created on: Oct 13, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <fstream>
#include <iostream>
#include <cmath>

void ComputeMeanAndStandardDeviation(int size, double* array, double& mu, double& sigma);

int main(int argc, char *argv[])
{
    // Ask users for the size of array
    int size;
    std::cout << "Please specify the size of the array: " << "\n";
    std::cin >> size;

    // Create an array of the specified size and assign values
    double* a = new double [size];
    std::cout << "The array is: " << "\n";
    for (int i = 0; i < size; i++)
    {
        a[i] = i+1;
        std::cout << a[i] << "\t";
    }
    std::cout << "\n";

    // Compute the mean and standard deviation of this array
    double mu, sigma;
    ComputeMeanAndStandardDeviation(size, a, mu, sigma);

    delete[] a;

    // Print it out
    std::cout << "Mean = " << mu << "\n";
    std::cout << "Standard deviation = " << sigma << "\n";
}

void ComputeMeanAndStandardDeviation(int size, double* array, double& mu, double& sigma)
{
    // compute the mean
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    mu = sum / (double) size;

    // compute the standard deviation
    double sum_of_squares = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum_of_squares += pow(array[i]-mu, 2);
    }
    sigma = sqrt(sum_of_squares / (double)(size-1));
}