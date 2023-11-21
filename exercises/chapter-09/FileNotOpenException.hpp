#ifndef PCSC_EXERCISES_FILENOTOPENEXCEPTION_HPP
#define PCSC_EXERCISES_FILENOTOPENEXCEPTION_HPP

#include "Exception.hpp"

class FileNotOpenException : public Exception
{
public:
    FileNotOpenException(std::string probString);
};

#endif //PCSC_EXERCISES_FILENOTOPENEXCEPTION_HPP
