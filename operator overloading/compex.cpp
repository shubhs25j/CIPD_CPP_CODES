#include<iostream>
class complex
{
    float a,b;
    public:
    complex(){}
    complex(float real,float imag)
    {
        a=real;
        b=imag;
    }
    complex operator+(complex &obj)
    {
        complex c;
        c.a=this->a+obj.a;
        c.b=this->b+obj.b;
        return c;
    }
    complex operator-(complex &obj)
    {
        complex c;
        c.a=this->a-obj.a;
        c.b=this->b-obj.b;
        return c;
    }
    void show()
    {
        std::cout<<a<<" + "<<b<<"j\n";
    }
};
int main()
{
    complex c1(2,4),c2(3.4,5.6);
    complex c3;
    c3=c1+c2;
    c3.show();
    complex c4;
    c4=c1-c2;
    c4.show();
}