#include<iostream>
#include<cstring>

class BankAcc
{
    std::string NameOfDepositer;
    int AccNumber;
    std::string Type_of_account;
    double balance;
    public:
    void initial_value(std::string name ,double ini_balance,std::string type,int accno)
    {
        NameOfDepositer=name;
        std::cout<<"The name of depositer is "<<name<<"\n";
        balance=ini_balance;
        std::cout<<"The Initial balance of account is: "<<ini_balance<<"\n";
        Type_of_account=type;
        std::cout<<"The type of  account is "<<type<<"\n";
        AccNumber=accno;
        std::cout<<"The account number is "<<accno<<"\n";
    }
    void Deposite(double amount)
    {
        balance=balance+amount;
       std::cout<<"The updated balance after deposite of "<<amount<<" Rs is "<<balance<<"\n";
    }
    void withdrowal(double amount)
    {
        if(balance>amount)
          {balance=balance-amount;
          std::cout<<"The updated balance after withdrowal of "<<amount<<" is "<<balance<<"\n";
          }
        else 
        std::cout<<"Insafficiant balance \n";
    }
    void disply()
    {
        std::cout<<"The name of depositer is "<<NameOfDepositer<<"\n";
        std::cout<<"Balance is "<<balance<<"\n";
    }
};
int main()
{
    BankAcc b1;
  
    b1.initial_value("shubham",12000,"saving",2552123);
    b1.Deposite(1000);
    b1.withdrowal(5000);
    b1.disply();

}