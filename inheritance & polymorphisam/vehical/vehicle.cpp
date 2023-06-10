#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(const std::string& make, const std::string& model, int year)
    : make(make), model(model), year(year) {}

Vehicle::~Vehicle() {}

void Vehicle::display() const {
    std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
}
