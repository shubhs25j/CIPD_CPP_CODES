#include<iostream>
#include"RatinalNo.h"
#include"exception.h"

int main()
{
    RationalNumber r1(2,3),r2(4,1);
    RationalNumber r3;
    r3=r1+r2;
    r1=r2;
    r3.display();
}