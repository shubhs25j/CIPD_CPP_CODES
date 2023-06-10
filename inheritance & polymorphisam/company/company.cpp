#include "company.h"
#include <iostream>

Company::Company(const std::string& companyName, int establishmentYear)
    : name(companyName), yearEstablished(establishmentYear) {}

Company::~Company() {}

void Company::displayInfo() const {
    std::cout << "Company Name: " << name << std::endl;
    std::cout << "Established Year: " << yearEstablished << std::endl;
}
