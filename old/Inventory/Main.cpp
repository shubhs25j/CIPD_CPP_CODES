

#include"Inventory.h"

int main()
{
    Inventory I1,I2(10),I3,I4;
    I1.display();
    I2.display();
    int buy,sal;
    std::cout<<"\nEnter the number of stock to buy : ";
    std::cin>>buy;
    I3.purchase(buy);
    std::cout<<"\nEnter the number of stock to sale : ";
    std::cin>>sal;
    I4.sale(sal);

    return 0;
}