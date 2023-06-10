#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include"Departments.h"

class Employee
{
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    int employeeId;
    double basicSalry;
    float experiance;

public:
    Employee(); // default constructor

    Employee(std::string, std::string, std::string, int employeeId);

    virtual void earnings() = 0; // pure virtual function
    virtual ~Employee()
    {
        std::cout << "\nEmployee destructor called\n";
    }
    float calInsuwrance(int ,float);

    virtual void print();

    std::string getSocialSecurityNumber() const { return socialSecurityNumber; }
    void setSocialSecurityNumber(const std::string &socialSecurityNumber_) { socialSecurityNumber = socialSecurityNumber_; }

    std::string getLastName() const { return lastName; }
    void setLastName(const std::string &lastName_) { lastName = lastName_; }

    std::string getFirstName() const { return firstName; }
    void setFirstName(const std::string &firstName_) { firstName = firstName_; }

    int getEmployeeId() const { return employeeId; }
    void setEmployeeId(int employeeId_) { employeeId = employeeId_; }

    double getBasicSalry() const { return basicSalry; }
    void setBasicSalry(double basicSalry_) { basicSalry = basicSalry_; }

    float getExperiance() const { return experiance; }
    void setExperiance(float experiance_) { experiance = experiance_; }
};
void showenumdata(enum DEPARTMENTS deprt);

#endif // EMPLOYEE_H
