#ifndef INVENTOR_H
#define INVENTOR_H

#include<iostream>
#include<string>



class Inventory
{
private:
    std::string description_of_product;
    int balance_stock=20;
    //const int default_balance=20;
public:
    Inventory();
    Inventory(int);

    int balanceStock() const { return balance_stock; }
    void setBalanceStock(int balanceStock) { balance_stock = balanceStock; }
    
    std::string descriptionOfProduct() const { return description_of_product; }
    void setDescriptionOfProduct(const std::string &descriptionOfProduct) { description_of_product = descriptionOfProduct; }

    void purchase(int);

    void sale(int);

    void display();
    
};


#endif


