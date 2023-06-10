#ifndef INVENTRY_H
#define INVENTRY_H

#include<iostream>
#include<cstring>

class Inventry
{
    std::string description_of_product;
    int balance_stock=20;
    static int productcode;//static variable
    
    public:
    Inventry();//def constructor
    Inventry(int);//parametarized const
    void purchase(int);
    void sale(int);
    void display();
    
    friend std::ostream& operator<<(std::ostream& os ,const Inventry& I1);//overloading<<

    std::string descriptionOfProduct() const { return description_of_product; }
    void setDescriptionOfProduct(const std::string &descriptionOfProduct) { description_of_product = descriptionOfProduct; }

    int balanceStock() const { return balance_stock; }
    void setBalanceStock(int balanceStock) { balance_stock = balanceStock; }

    int getProductcode() const { return productcode; }
    void setProductcode(int productcode_) { productcode = productcode_; }
    void search(int code);
};


#endif // INVENTRY_H
