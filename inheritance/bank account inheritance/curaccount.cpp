#include<iostream>
#include<cstring>
#include"curaccount.h"

// CurAccount::CurAccount()
// {
//     minimumBal=3000;
// }
// CurAccount::CurAccount(std::string name,int num,std::string type)
// {
//     Account(name,num, type);
//     // minimumBal=3000;
// }
int CurAccount::checkMiniBalance()
{
    int balance =this->getBalance();
    if(balance<minimumBal)
    {
        balance=balance-300;
    }
    return balance;
}