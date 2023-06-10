// Implement class Complex with real (int) and imaginary (int) parts as data members of class.
// Implement below functions inside this class.default constructor, parameterized constructor,
// getter functions for real and imaginary parts, setter functions for real and imaginary parts,
// display function

// Write a program to count number of objects created for above class Complex . 
// Use static data member and member function.

#include<iostream>
#include<cstring>

class Complex
{
    int real;
    int imagnary;
    static int count;
    public:
    Complex()
    {
        real=0;
        imagnary=0;
        count++;
    }
    Complex(int rel,int img)
    {
        real=rel;
        imagnary=img;
        count++;
    }
    void display()
    {
       std::cout<<real<<" + "<<imagnary<<" i \n"; 
    }
    Complex operator+( Complex &other)
    {
        Complex c1;
        c1.real=this->real+other.real;
        c1.imagnary=this->imagnary+other.imagnary;
        return c1;
    }
    Complex operator-( Complex &other)
    {
        Complex c1;
        c1.real=this->real-other.real;
        c1.imagnary=this->imagnary-other.imagnary;
        return c1;
    }

    int getReal() const { return real; }
    void setReal(int real_) { real = real_; }

    int getImagnary() const { return imagnary; }
    void setImagnary(int imagnary_) { imagnary = imagnary_; }
    static void counts()
    {
        std::cout<<count<<"\n";
    }
};
int Complex::count=0;
int main()
{
    Complex c1(2,4),c2(3,3),c3(2,9),c4;
    c1=c2+c3;
    c4=c3-c2;
    c1.display();
    c4.display();
    std::cout<<c1.getReal()<<"\n";
    std::cout<<c1.getImagnary()<<"\n";
    Complex::counts();
}

