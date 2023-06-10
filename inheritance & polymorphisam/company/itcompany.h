#ifndef ITCOMPANY_H
#define ITCOMPANY_H

#include "company.h"

class ITCompany : public Company {
private:
    std::string technology;
public:
    ITCompany(const std::string& companyName, int establishmentYear, const std::string& tech);
    ~ITCompany();
    void displayInfo() const override;
};

#endif  // ITCOMPANY_H
