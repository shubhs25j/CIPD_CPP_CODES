#include<iostream>
#include<cstring>

class BankAcc
{
    std::string NameOfDepositer;
    int AccNumber;
    std::string Type_of_account;
    double balance;
    public:
    BankAcc()
    {
        NameOfDepositer="shubham";
        AccNumber =12345678;
        Type_of_account="saving";
        balance=25000;
    }
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

    std::string nameOfDepositer() const { return NameOfDepositer; }
    void setNameOfDepositer(const std::string &nameOfDepositer) { NameOfDepositer = nameOfDepositer; }

    int accNumber() const { return AccNumber; }
    void setAccNumber(int accNumber) { AccNumber = accNumber; }

    std::string typeOfAccount() const { return Type_of_account; }
    void setTypeOfAccount(const std::string &typeOfAccount) { Type_of_account = typeOfAccount; }

    double getBalance() const { return balance; }
    void setBalance(double balance_) { balance = balance_; }
};
void fun()
{
    BankAcc b3;
    b3.withdrowal(2000);
    std::cout<<b3.getBalance();
}
int main()
{
    BankAcc b1;
    BankAcc *b2=new BankAcc[10];
    b2[1].disply();
    // b1.initial_value("shubham",12000,"saving",2552123);
    // b1.Deposite(1000);
    // b1.withdrowal(5000);
    // b1.disply();
    fun();
    return 0;

}