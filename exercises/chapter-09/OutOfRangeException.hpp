#ifndef PCSC_EXERCISES_OUTOFRANGEEXCEPTION_HPP
#define PCSC_EXERCISES_OUTOFRANGEEXCEPTION_HPP

#include "Exception.hpp"

class OutOfRangeException : public Exception
{
public:
    OutOfRangeException(std::string probString);
};

#endif //PCSC_EXERCISES_OUTOFRANGEEXCEPTION_HPP
