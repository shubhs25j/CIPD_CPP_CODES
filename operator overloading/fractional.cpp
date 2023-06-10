#include<iostream>
class fractinal
{
    double num;
    public:
    fractinal(){}
    fractinal(double num1)
    {
        num=num1;
    }
    void show ()
    {
        std::cout<<"The number is "<<num<<"\n";
    }
    void operator==(const fractinal &obj)
    {
        if(this->num==obj.num)
        std::cout<<"The number are eual\n";
        else
        std::cout<<"not equal\n";   
    }
    void operator!=(const fractinal &obj)
    {
        if(this->num!=obj.num)
        std::cout<<"The number are not equal\n";
        else
        std::cout<<"The number are equal\n";
    }
    void operator<=(const fractinal &obj)
    {
        if(this->num<obj.num)
        std::cout<<"The number is greater \n";
        else if (this->num<=obj.num)
        std::cout<<"The numbers are equals\n";
        else
        std::cout<<"The number small \n";
    }
     void operator>=(const fractinal &obj)
    {
        if(this->num>obj.num)
        std::cout<<"The number is small \n";
        else if (this->num>=obj.num)
        std::cout<<"The numbers are equals\n";
        else
        std::cout<<"The number greater \n";
    }
};
int main()
{
    fractinal f1(0.347623),f2(6.21421),f3(2.42321);
    f1==f2;
    f2<=f1;
    f2>=f1;
    f1!=f1;

}