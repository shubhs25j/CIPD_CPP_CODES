#include"Employee.h"

class CommissionEmployee : public Employee
{
private:
    int grossSales;
    double commissionRate;
public:
    CommissionEmployee()=delete;

    CommissionEmployee(const CommissionEmployee& obj)=delete;
    
    CommissionEmployee(std::string, std::string, std::string, int, double);
    
    void earnings();

    void print();

    int getGrossSales() const { return grossSales; }
    void setGrossSales(int grossSales_) { grossSales = grossSales_; }

    double getCommissionRate() const { return commissionRate; }
    void getCommissionRate(int commissionRate_) { commissionRate = commissionRate_; }
};




