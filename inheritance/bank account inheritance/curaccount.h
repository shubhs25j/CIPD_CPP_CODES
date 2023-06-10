#ifndef CUR_ACCOUNT_H
#define CUR_ACCOUNT_H

#include<iostream>
#include<cstring>
#include"account.h"

class CurAccount : public Account
{
    int minimumBal=3000;
    public:
    // CurAccount();
    // ~CurAccount(){}
    // CurAccount(std::string name,int num,std::string type);
    int checkMiniBalance();
    
};

#endif // CUR_ACCOUNT_H
