#include<iostream>

//class i
//comments
//think as developer, where code can fail and then act accordingly

class RationalNumber
{
private:
    int numerator;
    int denominator;
public:
    RationalNumber();
    
    RationalNumber(int, int);

    RationalNumber(const RationalNumber&)=delete;

    void validateFraction();

    void display();

    RationalNumber operator+ (const RationalNumber);

    RationalNumber operator- (const RationalNumber);

    RationalNumber operator* (const RationalNumber);

    int getDenominator() const { return denominator; }
    void setDenominator(int denominator_) { denominator = denominator_; }

    int getNumerator() const { return numerator; }
    void setNumerator(int numerator_) { numerator = numerator_; }

    ~RationalNumber();
};



