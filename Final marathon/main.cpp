#include"Inventry.h"

int main()
{
    Inventry I1;
   

   Inventry *Sugar = new Inventry(50);//dynamic memory allocation
   Inventry *oil = new Inventry(100);//dynamic memory allocation
   Inventry *rice = new Inventry(200);//dynamic memory allocation
   Inventry *cocnut = new Inventry(21);//dynamic memory allocation
   Inventry *dal = new Inventry(201);//dynamic memory allocation

    I1.search(3);
    // std::cout<<Sugar;

    Sugar->display();
    std::cout<<*Sugar;
    oil->display();
    int buy,sale;
    std::cout<<"\nEnter the number of stock to buy : ";
    std::cin>>buy;
    Sugar->purchase(buy);
    std::cout<<"\nEnter the number of stock to sale : ";
    std::cin>>sale;
    Sugar->sale(sale);
    
    // std::cout<<Sugar;

     delete Sugar;//free the momory
     delete oil;//free the momory
     delete rice;//free the momory
     delete cocnut;//free the momory
     delete dal;//free the momory

    return 0;
}