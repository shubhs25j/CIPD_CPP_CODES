#include<iostream>

int main()
{
    double numerator,denominator,divide;
    std::cout<<"Enter numerator: ";
    std::cin>>numerator;
    std::cout<<"Enter denominator: ";
    std::cin>>denominator;

    try
    {
        if(denominator==0)
        throw 0;

        divide=numerator/denominator;
        std::cout<<numerator<<" / "<<denominator<<" = "<<divide<<"\n";
    }
    catch(int num_exception)
    {
        std::cout<<"Error : cannot divide by "<<num_exception<<"\n";
    }
    return 0;
}