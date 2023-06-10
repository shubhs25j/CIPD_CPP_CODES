#include"BasePlusCommissionEmployee.h"


BasePlusCommissionEmployee::BasePlusCommissionEmployee(std::string firstName, std::string lastName, std::string socialSecurityNumber, int grossSales, double commissionRate)
:CommissionEmployee(firstName, lastName, socialSecurityNumber, grossSales, commissionRate)
{
}

void BasePlusCommissionEmployee::earnings()
{
    std::cout<<"Earnings for BasePlusCommission : "<<getCommissionRate() * getGrossSales();
}

void BasePlusCommissionEmployee::print()
{
    CommissionEmployee::print();
}