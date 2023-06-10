#include<iostream>
// int calculater :: count=0; 

class calculater
{
    float value;
    static int count;
    public:
    calculater()
    {
        count++;
        value=0.0;
    }
    calculater(float a)
    {
        count++;
        value=a;
    }
    void show()
    {
        std::cout<<"The value is : "<<value<<"\n";
    }
    
    calculater operator+(const calculater &c)
    {
        calculater c1;
        c1.value=this->value + c.value;
        return c1;
    }
    calculater operator-(const calculater &c)
    {
        calculater c1;
        c1.value=this->value-c.value;
        return c1;
    }
    calculater operator*(const calculater &c)
    {
        calculater c1;
        c1.value=this->value*c.value;
        return c1;
    }
    calculater operator/(const calculater &c)
    {
        calculater c1;
        c1.value=this->value/c.value;
        return c1;
    }
};
int calculater :: count=0; 
int main()
{
    calculater c1(23.2),c2(123.43),c3,c4,c5;
    c3=c2/c1;
    c3.show();
    c5=c2/c4;
    c5.show();
    return 0;
}