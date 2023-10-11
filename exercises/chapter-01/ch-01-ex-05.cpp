/*
 * ch-01-ex-05.cpp
 *
 * Given name and family name
 *
 * Created on: Oct 8, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string given_name, family_name;

    std::cout << "Your given name is: " << "\n";
    std::getline(std::cin, given_name);

    std::cout << "Your family name is: " << "\n";
    std::getline(std::cin, family_name);

    std::cout << "Your full name is: " << given_name << " " << family_name << "\n";

    return 0;
}