#include"RatinalNo.h"
#include"exception.h"


RationalNumber::RationalNumber()
{
    numerator=1;
    denominator=1;
}
void RationalNumber::validateFraction()
{
    if(denominator==0)
    {
        throw RatinalException("Can't divide by zero goes to infinite\n");
    }
}
void RationalNumber::display()
{
    std::cout<<numerator<<"/"<<denominator;
}


RationalNumber::RationalNumber(int n, int d):numerator(n), denominator(d)
{
    numerator=n;
    denominator=d;
}

RationalNumber RationalNumber::operator+(const RationalNumber obj)
{
    RationalNumber res;
    res.numerator=(this->numerator*obj.denominator)+(obj.numerator*this->denominator);
    res.denominator=(this->denominator*obj.denominator);
    return res;
}

RationalNumber RationalNumber::operator-(const RationalNumber obj)
{
    RationalNumber res;
    res.numerator=(this->numerator*obj.denominator)-(obj.numerator*this->denominator);
    res.denominator=(this->denominator*obj.denominator);
    return res;
}
bool RationalNumber::operator= (const RationalNumber obj)
{
    if(this->numerator==obj.numerator&&this->denominator==obj.denominator)
    {
        return true;
        std::cout<<"true\n";
    }
    else {
    return false;
    std::cout<<"false\n";
    }
    
}
RationalNumber RationalNumber::operator*(const RationalNumber obj)
{
    RationalNumber res;
    res.numerator=(this->numerator*obj.numerator);
    res.denominator=(this->denominator*obj.denominator);
    return res;
}
