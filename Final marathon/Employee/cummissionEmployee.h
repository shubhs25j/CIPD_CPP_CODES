#ifndef CUMMISSIONEMPLOYEE_H
#define CUMMISSIONEMPLOYEE_H

#include"Employee.h"

class CummissionEmployee :public Employee
{
    double grossSales;
    float commissionRate;
    public:
    CummissionEmployee()//default constructor
    {
         std::cout<<"\ncummissionEmployee constructor called\n";
    }
    ~CummissionEmployee(){
        std::cout<<"\ncummissionEmployee destructor called\n";
    }
    CummissionEmployee(std::string firstName, std::string lastName, std::string socialSecurityNumber,int id, int grossSales, double commissionRate);
    //parameter constructor
    void earnings();
    void print();

    double getGrossSales() const { return grossSales; }
    void setGrossSales(double grossSales_) { grossSales = grossSales_; }

    float getCommissionRate() const { return commissionRate; }
    void setCommissionRate(float commissionRate_) { commissionRate = commissionRate_; }

    // double getGrossSales() const { return grossSales; }
    // void setGrossSales(double grossSales_) { grossSales = grossSales_; }

    // float getCommissionRate() const { return commissionRate; }
    // void setCommissionRate(float commissionRate_) { commissionRate = commissionRate_; }
    
};

#endif // CUMMISSIONEMPLOYEE_H
