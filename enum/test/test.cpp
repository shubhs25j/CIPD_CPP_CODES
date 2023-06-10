#include<iostream>
#include"test.h"

Bag::Bag()
{
    price=100;
    bagcolour="red";
    bagsize=SIZE::SMALL;
}
Bag::Bag(int pr,std::string col,enum SIZE s):price(pr),bagcolour(col),bagsize(s){}

void Bag ::show()
{
    std::cout<<"Bag price is : "<<price<<"\n";
    std::cout<<"Bag colout is : "<<bagcolour<<"\n";
     showenumdata(bagsize);
}