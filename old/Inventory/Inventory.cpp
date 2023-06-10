#ifndef INVENTO_H
#define INVENTO_H

#include"Inventory.h"


Inventory::Inventory()
{
    balance_stock=500;
}

Inventory::Inventory(int balance_stock)
{
    if(balance_stock<20)
    {
        std::cout<<"\nminimum balance should be 20";
        //this->balance_stock=default_balance;
    }
    else
    {
        this->balance_stock=balance_stock;
    }
    
}

void Inventory::purchase(int add)
{
    balance_stock+=add;
    std::cout<<"\nBalance stock : "<<balance_stock;
}

void Inventory::sale(int sub)
{   
    int balance=balance_stock;

    if((balance-=sub)>20)
    {
        balance_stock-=sub;
        std::cout<<"\nBalance stock : "<<balance_stock;
    }
    else{
        std::cout<<"\nminimum balance will less be 20, Can't Sale!!";
    }
    
    
}

void Inventory::display()
{
    std::cout<<"\nBalance stock : "<<balance_stock;
}


#endif
