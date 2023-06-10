#include "laptop.h"
#include <iostream>

Laptop::Laptop(const std::string& brand, double price, const std::string& processor)
    : ElectronicItem(brand, price), processor(processor) {}

void Laptop::display() const {
    std::cout << "Laptop - Brand: " << brand << ", Price: Rs" << price
              << ", Processor: " << processor << std::endl;
}
