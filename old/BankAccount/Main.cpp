#include"BankAccount.h"


int main()
{
    BankAccount A1;
    A1.showDetails();
    
    BankAccount A2("Ram",3000);
    A2.showDetails();

    BankAccount A5("Ram",10000);
    A5.showDetails();

    BankAccount A3("Rohan",6000);
    A3.withdraw(2000);
    A3.showDetails();

    BankAccount A4("Abhijeet",8000);
    A4.withdraw(2000);
    A4.showDetails();

    BankAccount::ShowCnt();
}