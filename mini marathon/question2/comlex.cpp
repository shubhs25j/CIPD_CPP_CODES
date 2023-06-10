#include<iostream>
#include"complex.h"

    Complex Complex:: operator+(Complex &obj)//+ operator overloaded
    {
        Complex c;
        c.real=this->real+obj.real;
        c.imag=this->imag+obj.imag;
        return c;
    }
     Complex Complex:: operator-(Complex &obj)//- operator overloaded
    {
        Complex object;
        object.real=this->real-obj.real;
        object.imag=this->imag-obj.imag;
        return object;
    }
    Complex Complex:: operator-()//=-operator overloaded
    {
        Complex object;
        object.real= -(this->real);
        object.imag= -(this->imag);
        return object;
    }
    bool Complex :: operator==(const Complex &obj)//==operator overloaded
    {
        // bool equal=false;
        if(this->real==obj.real && this->imag==obj.imag)
        {
            std::cout<<"Yes It is Equal!!\n";
            return true;

        }
        else
        {
        std::cout<<"Not equal\n";
        return false;
        }
        // return equal;
       
    }
    bool Complex::operator!=(const Complex &obj)//!=operator overloaded
    {
        // bool equal=false;
        if(this->real==obj.real && this->imag==obj.imag)
        {
            std::cout<<"It is Equal\n";
            return true;
        }
        else{
        std::cout<<"It is NOT Equal!!\n";
        return false;
        }
       
    }
    void Complex::display()
    {
        std::cout<<real<<" + "<<imag<<"j\n";
    }
    void Complex::accept()
    {
        std::cout<<"Enter the real number\n";
        std::cin>>real;
        std::cout<<"Enter imaginary number\n";
        std::cin>>imag;
    }
