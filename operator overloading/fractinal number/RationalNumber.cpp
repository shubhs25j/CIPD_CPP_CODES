#include "RationalNumber.h"
#include<iostream>

RationalNumber::RationalNumber() {
    numerator = 0;
    denominator = 1;
}

RationalNumber::RationalNumber(int num, int denom) {
    numerator = num;
    denominator = denom;
}

int RationalNumber::getNumerator() const {
    return numerator;
}

int RationalNumber::getDenominator() const {
    return denominator;
}

RationalNumber RationalNumber::operator+(const RationalNumber& other) const {
    int num = (numerator * other.denominator) + (other.numerator * denominator);
    int denom = denominator * other.denominator;
    return RationalNumber(num, denom);
}

RationalNumber RationalNumber::operator-(const RationalNumber& other) const {
    int num = (numerator * other.denominator) - (other.numerator * denominator);
    int denom = denominator * other.denominator;
    return RationalNumber(num, denom);
}

RationalNumber RationalNumber::operator*(const RationalNumber& other) const {
    int num = numerator * other.numerator;
    int denom = denominator * other.denominator;
    return RationalNumber(num, denom);
}
