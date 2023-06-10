#include <iostream>

class RatinalException : public std::exception
{

    std::string message;

public:
    RatinalException(){};//default const
    RatinalException(std::string msg)//parameter const
    {
        message = msg;
    }

    const std::string getMessage()
    {
        return message;
    }
};