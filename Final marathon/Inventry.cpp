#include"Inventry.h"
int Inventry::productcode=0;
Inventry::Inventry()//def constructor
{
    balance_stock=100;
    description_of_product="default";
    productcode++;
}

Inventry::Inventry(int balance_stock)//parametarized const
{
    if(balance_stock<20)
    {
        std::cout<<"\nminimum balance should be 20";
    }
    else
    {
        this->balance_stock=balance_stock;
        description_of_product="default";
        productcode++;
    }
    
}

void Inventry::purchase(int add)//purchase will add the Items to the balance 
{
    balance_stock+=add;
    std::cout<<"\nBalance stock : "<<balance_stock;
}

void Inventry::sale(int sub)
{   
    int balance=balance_stock;

    if((balance -=sub)>20)//check if new balance is less than 20 or not
    {
        balance_stock -=sub;
        std::cout<<"\nBalance stock : "<<balance_stock;
    }
    else//if not can't sell
    {
        std::cout<<"\nminimum balance will less be 20, Can't Sale!!";
    }   
}


void Inventry::display()
{
    std::cout<<"\nBalance stock : "<<balance_stock;
    // std::cout<<"\n description_of_product : "<<description_of_product;
}

void Inventry ::search(int code)
{
    if(code<=productcode)
    {
        std::cout<<"\nYes product is available in Inventry ";
    }
    else
    {
        std::cout<<"\nSorry The product is not available \n";
    }
}
std::ostream& operator<<(std::ostream& os ,const Inventry& I1)
{
    os<<"\nBalance Stock is :"<<I1.balance_stock<<" description_of_product: "<<I1.description_of_product;
    
    return os;
}
