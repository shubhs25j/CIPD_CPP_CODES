#include <iostream>
class Interger
{
    int i;

public:
Interger(){}
    Interger(int a)
    {
        i = a;
    }
    Interger operator++()//overloading preIncrement operator ++
    {
        ++i;
        return *this;
    }
    Interger operator++(int)
    {
        Interger temp;
        temp=*this;
        ++i;
        return temp;
    }
    Interger operator--()//pre decrement
    {
        --i;
        return *this;
    }
    Interger operator--(int)//post decrement
    {
        Interger temp;
        temp=*this;
        return temp;
    }
    void display()
    {
        std::cout<<"The value of i is: "<<i<<"\n";
    }
};
int main()
{
    Interger a1(2),a2(3);
    a2=++a1;
    // a2.display();
    a2=a1++;
    // a2.display();
    Interger a3(9),a4(3),a5(4);
    a5=--a4;
    a5.display();

}
