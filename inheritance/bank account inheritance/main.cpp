#include<iostream>
#include<cstring>
#include"curaccount.h"


int main()
{
    Account *acc = new CurAccount();
    // acc->accept();
    // acc->displayBal();
    // acc->show();
    acc->accept();
    // acc->setBalance(10000);t
    acc->setBalance(1000);
    acc->displayBal();
    acc->show();
    

}