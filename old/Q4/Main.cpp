#include"BasePlusCommissionEmployee.h"


int main()
{
    CommissionEmployee* ce=new CommissionEmployee("Raju","Ram", "ssn000", 5, 100);
    ce->print();
    ce->earnings();

    BasePlusCommissionEmployee* bpce= new BasePlusCommissionEmployee("ram","raju", "ssn011", 15, 100);
    bpce->print();
    bpce->earnings();

    Employee* e=new CommissionEmployee("Tanuj","Balkhande", "ssn123", 10, 100);
    e->print();
    e->earnings();

    Employee* e1=new BasePlusCommissionEmployee("balkhande","tanuj", "ssn321", 20, 200);
    e1->print();
    e1->earnings();
}