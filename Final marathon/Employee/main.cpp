#include"Employee.h"
#include"cummissionEmployee.h"
#include"Manager.h"
// #include"Departments.h"
void showenumdata(enum DEPARTMENTS deprt)
{
    if(deprt==DEPARTMENTS ::MARKETING)
       std::cout<<"department : Marketing ";
    else if(deprt==DEPARTMENTS::SALES)
    std::cout<<"Department : sales";
    else if(deprt==DEPARTMENTS::RECRUTING)
    std::cout<<"Department : Recruting";
}

int main()
{
    Employee *Ep=new CummissionEmployee("shubham","jagadale","A1",151404,100,5.10);
    Ep->print();
    Ep->earnings();
    Employee *Ep2=new Manager("Shubham","Jagadale","A2",151405,"Man",DEPARTMENTS ::MARKETING,12,3);
    Ep2->print();
    Ep2->earnings();
    std::cout<<Ep->calInsuwrance(2,2000);

    delete Ep;
    delete Ep2;
    return 0;

}