#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include<iostream>

class RationalNumber {
    int numerator;
    int denominator;

public:
    RationalNumber();
    RationalNumber(int num, int denom);
    int getNumerator() const;
    int getDenominator() const;
    RationalNumber operator+(const RationalNumber& other) const;
    RationalNumber operator-(const RationalNumber& other) const;
    RationalNumber operator*(const RationalNumber& other) const;
};

#endif // RATIONALNUMBER_H
