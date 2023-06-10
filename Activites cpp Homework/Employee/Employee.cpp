#include<iostream>
#include<cstring>
#include"Employee.h"

Employee:: Employee()
{
    emp_id=0;
    emp_name="";
    salary=0;
}
Employee::Employee(int id,std::string name,double sala)
{
    emp_id=id;
    emp_name=name;
    salary=sala;
}
void Employee::Accept()
{
    std::cout<<"Enter id of emp : \n";
    std::cin>>emp_id;
    std::cout<<"Enter name of emp : \n";
    std::cin>>emp_name;
    std::cout<<"Enter salary of emp : \n";
    std::cin>>salary;
}
void Employee :: Display()
{
    std::cout<<"Emp id is : "<<emp_id;
    std::cout<<"\nEmp name is : "<<emp_name;
    std::cout<<"\nEmp salary is : "<<salary;
}

