#ifndef LAPTOP_H
#define LAPTOP_H

#include "electronicitem.h"
#include <string>

class Laptop : public ElectronicItem {
public:
     Laptop(){}
    Laptop(const std::string& brand, double price, const std::string& processor);
    void display() const override;
private:
    std::string processor;
};

#endif // LAPTOP_H
