/*
 * ch-05-ex-01.cpp
 *
 * Send the address of an integer to a function that prints out the value of the integer
 *
 * Created on: Oct 10, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <fstream>
#include <iostream>

void PrintOutIntegerValue(int* pInteger);

int main(int argc, char *argv[])
{
    int i = 178;
    int* p_i = &i;
    PrintOutIntegerValue(p_i);

    return 0;
}

void PrintOutIntegerValue(int* pInteger)
{
    std::cout << *pInteger;
}