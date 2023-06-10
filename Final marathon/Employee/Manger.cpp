#include"Manager.h"

Manager::Manager()//default constructor
{
    std::cout<<"\nManager constructor called\n";
}
Manager:: Manager(std::string firstName, std::string lastName, std::string socialSecurityNumber,int id,std::string designation,enum DEPARTMENTS deprt,double incentive,int numberOfSubordinates)
:Employee(firstName, lastName, socialSecurityNumber,id)
{
    this->designation=designation;
    this->deprt=deprt;
    this->incentive=incentive;
    this->numberOfSubordinates=numberOfSubordinates;
}
void Manager::earnings()
{
     std::cout<<"\nEarnings for Manager : "<<numberOfSubordinates*incentive;
}
void Manager::print()
{
    Employee::print();
    std::cout<<"\n designation : "<<designation;
    std::cout<<"\n Incentives : "<<incentive;
    std::cout<<"\n Number of subordinates : "<<numberOfSubordinates;
}
