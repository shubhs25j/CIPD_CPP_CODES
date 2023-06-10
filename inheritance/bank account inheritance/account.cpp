#include<iostream>
#include<cstring>
#include"account.h"

// Account::Account()
// {
//     accName="";
//     accNumber=0;
//     accType="";
//     // balance=0;
//     std::cout<<"Enter initial balance: \n";
//     std::cin>>balance;
// }
// Account::Account(std::string name,int num,std::string type)
// {
//     accName=name;
//     accNumber=num;
//     accType=type;
//     // std::cout<<"Enter initial balance: \n";
//     // std::cin>>balance;
    
// }
void Account::accept()
{
    std::cout<<"Enter the name of accrount holder: \n";
    std::cin>>accName;
    std::cout<<"Enter the account number : \n";
    std::cin>>accNumber;
    std::cout<<"Enter the account type: ";
    std::cin>>accType;
}
void Account::show()
{
    std::cout<<"Name is "<<accName<<"\n";
    std::cout<<"Acc Number is "<<accNumber<<"\n";
    std::cout<<"Type of account is "<<accType<<"\n";
}
void Account ::displayBal()
{
    std::cout<<"The balanace is : "<<balance<<"\n";
}
void Account::deposit(int deposite)
{
    balance=balance+deposite;
    std::cout<<"The updated balance is : "<<balance<<"\n";
}
void Account:: withdrowal(int withdrowal)
{
    if(balance>withdrowal)
    {
        balance=balance-withdrowal;
        std::cout<<"The updated balance is : "<<balance<<"\n";
    }
    else
    {
        std::cout<<"insafficient Balance !!!!!\n";
    }
}