#include<iostream>
void add(double a,double b)
{
    std::cout<<a+b<<"double\n";
}
void add(float a,float b)
{
    std::cout<<a+b<<"float\n";
}
void add(int a,int b)
{
    std::cout<<a+b<<"int\n";
}
int main()
{
    add(10,20);
    add(10.2,30.2);
    add(10.2f,24.4f);
   // add(10.2,3);
}