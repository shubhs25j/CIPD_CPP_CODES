#include "policy.h"
#include <iostream>

Policy::Policy(const std::string& policyNumber, double premium)
    : policyNumber(policyNumber), premium(premium) {}

Policy::~Policy() {}

void Policy::display() const {
    std::cout << "Policy Number: " << policyNumber << ", Premium: Rs" << premium << std::endl;
}
