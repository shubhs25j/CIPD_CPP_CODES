#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<cstring>

class Account
{
    std::string accName;
    int accNumber;
    std::string accType;
    int balance;
    public:
    // Account();
    // ~Account(){}
    // Account(std::string name,int num,std::string type);
   virtual void accept();
   virtual void displayBal();
   void show();
   virtual void deposit(int deposite);
   virtual void withdrowal(int withdrowal);

    std::string getAccName() const { return accName; }
    void setAccName(const std::string &accName_) { accName = accName_; }

    int getAccNumber() const { return accNumber; }
    void setAccNumber(int accNumber_) { accNumber = accNumber_; }

    std::string getAccType() const { return accType; }
    void setAccType(const std::string &accType_) { accType = accType_; }

    int getBalance() const { return balance; }
    void setBalance(int balance_) { balance = balance_; }
};

#endif // ACCOUNT_H
