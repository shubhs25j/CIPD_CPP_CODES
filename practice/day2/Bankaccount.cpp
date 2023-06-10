#include <iostream>
#include "BankAccount.h"
int BankAccount ::accno = 100;
int BankAccount ::count = 0;

void BankAccount::show()
{
    std::cout << "The account no is " << accountNo << "\n";
    std::cout << "The custer name is " << customerName << "\n";
    std::cout << "The balance is " << balance << "\n";
}
void BankAccount::countcheck()
{
    std::cout << "count is " << count;
}
