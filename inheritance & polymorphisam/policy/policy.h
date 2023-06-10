#ifndef POLICY_H
#define POLICY_H

#include <string>

class Policy {
public:
    Policy(const std::string& policyNumber, double premium);
    virtual ~Policy();
    virtual void display() const;
protected:
    std::string policyNumber;
    double premium;
};

#endif // POLICY_H
