#ifndef BANK_H
#define BANK_H

#include<iostream>

static long long accountNumber;

class BankAccount
{
private:
    
    long long accNumber;
    std::string customerName;
    float balance;
    static int cnt;
public:
    BankAccount();
    BankAccount(std::string, float);

    void withdraw(float);

   static void ShowCnt();

   void showDetails(); 

};






#endif