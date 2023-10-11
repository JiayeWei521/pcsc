/*
 * ch-04-ex-01.cpp
 *
 *
 *
 * Created on: Oct 4, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
    int i = 5;
    int* p_j;

    p_j = &i; // p_j stores the address of i
    i = *p_j * 5;
    std::cout << i << "\n";

    int* p_k = new int;
    // *p_k = *p_j;
    *p_k = i;
    *p_j = 0;

    // check the correctness of the program by printing out values
    std::cout << "Value of i: " << i << "\n";
    std::cout << "Value pointed to by p_j: " << *p_j << "\n";
    std::cout << "Value pointed to by p_k: " << *p_k << "\n";
}