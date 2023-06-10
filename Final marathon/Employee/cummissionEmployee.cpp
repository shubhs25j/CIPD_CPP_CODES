#include"cummissionEmployee.h"


CummissionEmployee::CummissionEmployee(std::string firstName, std::string lastName, std::string socialSecurityNumber,int Id, int grossSales, double commissionRate)
: Employee(firstName, lastName, socialSecurityNumber,Id)
{
    this->grossSales=grossSales;
    this->commissionRate=commissionRate;
}

void CummissionEmployee::earnings()
{
    std::cout<<"\nEarnings for Commission : "<<grossSales+commissionRate;
}

void CummissionEmployee::print()
{
    Employee::print();
    std::cout<<"\nGross sales : "<<grossSales;
    std::cout<<"\nCommission Rate : "<<commissionRate;
}