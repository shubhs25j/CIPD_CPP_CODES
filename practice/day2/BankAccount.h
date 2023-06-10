#ifndef __BANKACCOUNT // HEADER GARD -conditional compolation
#define __BANKACCOUNT
#include <iostream>

class BankAccount
{
    int accountNo;
    std::string customerName;
    double balance;
    static int accno;
    static int count;

public:
    BankAccount()
    {
        accno++;
        accountNo = accno;
        customerName = "shubham";
        balance = 230000;
        count++;
    }
    BankAccount(std::string name, double bal) : customerName(name), balance(bal)
    {
        accno++;
        accountNo = accno;
        count++;
    }
    void show();
    static void countcheck();

    int getAccountNo() const { return accountNo; }
    void setAccountNo(int accountNo_) { accountNo = accountNo_; }

    std::string getCustomerName() const { return customerName; }
    void setCustomerName(const std::string &customerName_) { customerName = customerName_; }

    double getBalance() const { return balance; }
    void setBalance(double balance_) { balance = balance_; }
};

#endif