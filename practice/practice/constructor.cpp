#include<iostream>

class BankAccount
{
int accno;
double balance;
public:
BankAccount()// Defult constructor
{
    accno=12345;
    balance=120309;
}
void show()
{
    std::cout<<accno<<std::endl;
    std::cout<<balance<<std::endl;
}
BankAccount(int a,double b)
{
    accno=a;
    balance=b;
}

};
int main()
{
    BankAccount b1;
    BankAccount b2(2552,25000);
    b2.show();
    b1.show();
}