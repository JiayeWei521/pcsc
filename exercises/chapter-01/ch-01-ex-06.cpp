/*
 * ch-04-ex-01.cpp
 *
 * Average of numbers
 *
 * Created on: Oct 8, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
    // Create an integer array to store these five numbers
    int number_of_cars[5] = {34, 58, 57, 32, 43};

    // Compute the average of these numbers
    double average;
    double sum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        sum += (double) number_of_cars[i];
    }
    average = sum / 5;
    std::cout << "The average of the sample data is: " << average << std::endl;
}