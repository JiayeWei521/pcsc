//
// Created by Jiaye Wei on 25.10.2023.
//

#ifndef GRADUATESTUDENTSHEADERDEF
#define GRADUATESTUDENTSHEADERDEF

#include <iostream>
#include "graduate_student.hpp"

class PhDStudent : public GraduateStudent
{
public:
    std::string FullTimeOrPartTime;
    double GetTotalOwedMoney() const;
};

#endif