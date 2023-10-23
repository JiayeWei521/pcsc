//
// Created by Jiaye Wei on 23.10.2023.
//

#ifndef UNIVERSITYSTUDENTSHEADERDEF
#define UNIVERSITYSTUDENTSHEADERDEF

#include <iostream>

class UniversityStudent
{
public:
    std::string name;
    double libraryFines;
    double tuitionFees;

    double GetTotalOwedMoney();

};

#endif