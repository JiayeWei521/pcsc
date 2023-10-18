/*
 * ch-06-ex-02.cpp
 *
 *
 *
 * Created on: Oct 18, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <fstream>
#include <iostream>

void ChangeIntegerValue(int* pInteger);

int main(int argc, char *argv[])
{
    int i = 178;
    int* p_i = &i;
    ChangeIntegerValue(p_i);
    std::cout << i;
    return 0;
}

void ChangeIntegerValue(int* pInteger)
{
    *pInteger = 180;
}