#ifndef RATINALNO_H
#define RATINALNO_H

#include<iostream>

class RationalNumber
{
    int numerator;
    int denominator;
public:
    RationalNumber();
    
    RationalNumber(int, int);
    void validateFraction();

    void display();
    RationalNumber operator+ (const RationalNumber);

    RationalNumber operator- (const RationalNumber);

    RationalNumber operator* (const RationalNumber);

    bool operator= (const RationalNumber );

    int getNumerator() const { return numerator; }
    void setNumerator(int numerator_) { numerator = numerator_; }

    int getDenominator() const { return denominator; }
    void setDenominator(int denominator_) { denominator = denominator_; }
};

#endif // RATINALNO_H
