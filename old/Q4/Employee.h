#include<iostream>

class Employee
{
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
public:
    Employee()=delete;

    Employee(const Employee& obj)=delete;
    
    Employee(std::string, std::string, std::string);
    
    virtual void earnings() = 0;

    void print();

    std::string getSocialSecurityNumber() const { return socialSecurityNumber; }
    void setSocialSecurityNumber(const std::string &socialSecurityNumber_) { socialSecurityNumber = socialSecurityNumber_; }
    
    std::string getLastName() const { return lastName; }
    void setLastName(const std::string &lastName_) { lastName = lastName_; }
    
    std::string getFirstName() const { return firstName; }
    void setFirstName(const std::string &firstName_) { firstName = firstName_; }
};



