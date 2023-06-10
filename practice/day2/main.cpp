#include <iostream>
#include "BankAccount.h"

int main()
{
    BankAccount b1, b2, b3("shubham jagadale", 21000);
    b1.show();
    b2.show();
    b3.show();
    //    std::cout<< b1.getCustomerName();
    BankAccount ::countcheck();
}