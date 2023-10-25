//
// Created by Jiaye Wei on 23.10.2023.
//

#ifndef UNIVERSITYSTUDENTSHEADERDEF
#define UNIVERSITYSTUDENTSHEADERDEF

#include <iostream>

class UniversityStudent
{
private:
    double libraryFines;

public:
    std::string name;
    double tuitionFees;

    UniversityStudent();

    void SetLibraryFines(const double& libraryFines);
    double GetLibraryFines() const;
    virtual double GetTotalOwedMoney() const;

};

#endif