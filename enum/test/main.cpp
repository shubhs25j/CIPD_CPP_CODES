#include<iostream>
#include"test.h"

void showenumdata(enum SIZE bagsize)
{
    if(bagsize==SIZE ::SMALL)
       std::cout<<"Bag size : small";
    else if(bagsize==SIZE::MEDIUM)
    std::cout<<"Bag size : Medium";
    else if(bagsize==SIZE::LARGE)
    std::cout<<"Bag size : Large";
}
int main()
{
    Bag b1;
    b1.show();
}