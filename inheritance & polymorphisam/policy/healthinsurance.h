#ifndef HEALTHINSURANCE_H
#define HEALTHINSURANCE_H

#include "policy.h"
#include <string>

class HealthInsurance : public Policy {
public:
    HealthInsurance(const std::string& policyNumber, double premium, const std::string& provider);
    void display() const override;
private:
    std::string provider;
};

#endif // HEALTHINSURANCE_H
