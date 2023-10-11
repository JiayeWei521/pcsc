/*
 * ch-04-ex-02.cpp
 *
 * Swap values of two variables
 *
 * Created on: Oct 4, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    // assign values to two integer variables.
    int i = 421;
    int j = 402;
    std::cout << "The value of integer variable i is: " << i << "\n";
    std::cout << "The value of integer variable j is: " << j << "\n";

    int *p_i = new int;
    p_i = &i;
    int *p_j = new int;
    p_j = &j;

    int k = *p_i;
    *p_i = *p_j;
    *p_j = k;

    // check the correctness of the program by printing out values
    std::cout << "\n" << "After swap" << "\n";
    std::cout << "The value of integer variable i is: " << i << "\n";
    std::cout << "The value of integer variable j is: " << j << "\n";
}