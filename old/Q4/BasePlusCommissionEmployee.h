#include"CommissionEmployee.h"

class BasePlusCommissionEmployee:public CommissionEmployee
{
private:
    /* data */
public:
    BasePlusCommissionEmployee()=delete;

    BasePlusCommissionEmployee(const BasePlusCommissionEmployee& obj)=delete;
    
    BasePlusCommissionEmployee(std::string, std::string, std::string, int, double);

    void earnings();

    void print();
    
};



