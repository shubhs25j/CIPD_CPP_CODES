#ifndef COMPANY_H
#define COMPANY_H

#include <string>

class Company {
private:
    std::string name;
    int yearEstablished;
public:
    Company(const std::string& companyName, int establishmentYear);
    virtual ~Company();
    virtual void displayInfo() const;
};

#endif  // COMPANY_H
