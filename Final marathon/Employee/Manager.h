#ifndef MANAGER_H
#define MANAGER_H

#include"Employee.h"
#include"Departments.h"

class Manager : public Employee//inheritance public 
{
    std::string designation;
    enum DEPARTMENTS deprt;
    double incentive;
    int numberOfSubordinates;
    public:
    Manager();//default constructor
    ~Manager(){//destructor 
        std::cout<<"\nManager destructor called\n";
    }
    Manager(std::string firstName, std::string lastName, std::string socialSecurityNumber,int id,std::string designation,enum DEPARTMENTS deprt,double incentive,int numberOfSubordinates );
    void earnings();
    void print();
    std::string getDesignation() const { return designation; }
    void setDesignation(const std::string &designation_) { designation = designation_; }

    double getIncentive() const { return incentive; }
    void setIncentive(double incentive_) { incentive = incentive_; }

    int getNumberOfSubordinates() const { return numberOfSubordinates; }
    void setNumberOfSubordinates(int numberOfSubordinates_) { numberOfSubordinates = numberOfSubordinates_; }
};

#endif // MANAGER_H
