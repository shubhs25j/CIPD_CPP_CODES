#include "healthinsurance.h"
#include <iostream>

HealthInsurance::HealthInsurance(const std::string& policyNumber, double premium, const std::string& provider)
    : Policy(policyNumber, premium), provider(provider) {}

void HealthInsurance::display() const {
    std::cout << "Health Insurance - Policy Number: " << policyNumber << ", Premium: Rs" << premium
              << ", Provider: " << provider << std::endl;
}
