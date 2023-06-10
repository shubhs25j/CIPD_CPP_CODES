#include"CommissionEmployee.h"


CommissionEmployee::CommissionEmployee(std::string firstName, std::string lastName, std::string socialSecurityNumber, int grossSales, double commissionRate)
: Employee(firstName, lastName, socialSecurityNumber)
{
    this->grossSales=grossSales;
    this->commissionRate=commissionRate;
}

void CommissionEmployee::earnings()
{
    std::cout<<"Earnings for Commission : "<<grossSales+commissionRate;
}

void CommissionEmployee::print()
{
    Employee::print();
    std::cout<<"\nGross sales : "<<grossSales;
    std::cout<<"\nCommission Rate : "<<commissionRate;
}