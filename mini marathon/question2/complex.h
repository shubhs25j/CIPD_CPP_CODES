#ifndef __COMPLEX
#define __COMPLEX
#include<iostream>
class Complex
{
    int real;
    int imag;
    public:
    Complex(){}//default constructor 
    Complex(int rel,int img)//parameterized constructor
    {
        real=rel;
        imag=img;
    }
    Complex operator+(Complex &obj);//+ operator overloaded
    Complex operator-(Complex &obj);//- operator overloaded
    Complex operator-();
    bool operator==(const Complex &obj);//==operator overloaded
    bool operator!=(const Complex &obj);//!=operator overloaded
    void display();
    void accept();

    int getImag() const { return imag; }
    void setImag(int imag_) { imag = imag_; }

    int getReal() const { return real; }
    void setReal(int real_) { real = real_; }
};
#endif
