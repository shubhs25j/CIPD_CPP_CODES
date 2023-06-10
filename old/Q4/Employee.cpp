
#include"Employee.h"

Employee::Employee(std::string firstName, std::string lastName, std::string socialSecurityNumber)
:firstName(firstName), lastName(lastName), socialSecurityNumber(socialSecurityNumber)    
{  
    this->firstName=firstName;
    this->lastName=lastName;
    this->socialSecurityNumber=socialSecurityNumber;
}

void Employee::print()
{
    std::cout<<"\nFirst Name : "<<firstName;
    std::cout<<"\nLast Name : "<<lastName;
    std::cout<<"\nSocial Security Number : "<<socialSecurityNumber;
    std::cout<<std::endl<<std::endl;
}