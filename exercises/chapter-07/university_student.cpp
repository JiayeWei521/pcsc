/*
 * ch-07-ex-01.cpp
 *
 * Class of complex numbers
 *
 * Created on: Oct 23, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include "university_student.hpp"
#include <cassert>
#include <cmath>

UniversityStudent::UniversityStudent()
{
    libraryFines = 0.0;
    tuitionFees = 0.0;
}

void UniversityStudent::SetLibraryFines(const double& userSetLibraryFines)
{
    assert(userSetLibraryFines >= 0.0);
    libraryFines = userSetLibraryFines;
}

double UniversityStudent::GetLibraryFines() const
{
    return libraryFines;
}

double UniversityStudent::GetTotalOwedMoney() const
{
    return libraryFines + tuitionFees;
}

