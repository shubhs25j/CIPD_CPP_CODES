#include "itcompany.h"
#include <iostream>

ITCompany::ITCompany(const std::string& companyName, int establishmentYear, const std::string& tech)
    : Company(companyName, establishmentYear), technology(tech) {}

ITCompany::~ITCompany() {}

void ITCompany::displayInfo() const {
    Company::displayInfo();
    std::cout << "Technology: " << technology << std::endl;
}
