#ifndef ACCOUNT_H
#define ACCOUNT_H

#include"BankAccount.h"



BankAccount::BankAccount()
{
    accountNumber=100101;
    accNumber=accountNumber;
    customerName="Shubham jagadale  ";
    balance=5001;
    cnt++;
}

BankAccount::BankAccount(std::string name, float bal)
{
    cnt++;
    try
    {
        if(bal<5000)
        {
            throw bal;
        }
        else
        {
            accountNumber++;
            accNumber=accountNumber;
            customerName = name;
            balance=bal;
        }
    }
    catch(float bal)
    {
        std::cout<<"\nInitial Balance should be 5000 or more";
    }
}

void BankAccount::withdraw(float amount)
{
    float localBalance=balance;
    try
    {
        if(localBalance-=amount>5000)
        {
            balance-=amount;
        }
        else
        {
            throw amount;
        }
    }
    catch(float amount)
    {
        std::cout<<"\nMinimum Balance should be 5000 or more, can't withdraw money";
    }
    
}

void BankAccount::showDetails()
{
    std::cout<<"\nAccount number : "<<accNumber;
    std::cout<<"\nCustomer name : "<<customerName;
    std::cout<<"Balance : "<<balance;
    std::cout<<std::endl;
    std::cout<<std::endl;
}


int BankAccount::cnt;

void BankAccount :: ShowCnt()
{
    std::cout<<"/nNumber of object created : "<<cnt<<std::endl;
}



#endif