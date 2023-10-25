//
// Created by Jiaye Wei on 25.10.2023.
//

#ifndef GRADUATESTUDENTSHEADERDEF
#define GRADUATESTUDENTSHEADERDEF

#include <iostream>
#include "university_student.hpp"

class GraduateStudent : public  UniversityStudent
{
public:
    std::string FullTimeOrPartTime;
    double GetTotalOwedMoney() const;
};

#endif