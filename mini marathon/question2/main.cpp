#include<iostream>
#include"complex.h"
int main()
{
    Complex c1(2,3),c2(2,3),c3(4,3),c4;
    c1==c2;
    c1!=c3;
    c1=c2+c3;
    c1.display();
    c4=c3-c2;
    c4.display();
    c1=-c2;
    c1.display();
    std::cout<<c1.getImag()<<"\n";
    std::cout<<c1.getReal();
    Complex *c5 = new Complex(1,2);
   std::cout<<c5->getReal();
   std::cout<<c5->getImag();
    c5->display();
    delete c5;
    


}