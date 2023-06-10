#include"Employee.h"
Employee::Employee(){
    std::cout<<"\nEmployee constructor called\n";
}

Employee::Employee(std::string first, std::string last, std::string socialSecurity,int Id)
:firstName(first), lastName(last), socialSecurityNumber(socialSecurity),employeeId(Id)  {}//parametre constructor

void Employee::print()
{
    std::cout<<"\nFirst Name : "<<firstName;
    std::cout<<"\nLast Name : "<<lastName;
    std::cout<<"\nSocial Security Number : "<<socialSecurityNumber;
    std::cout<<"\nEmployee ID : "<<employeeId;
}

float Employee::calInsuwrance(int member,float preminum)
{

    return member*preminum;
}