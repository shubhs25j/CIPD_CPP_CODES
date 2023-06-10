#include "car.h"
#include <iostream>

Car::Car(const std::string& make, const std::string& model, int year, int numDoors)
    : Vehicle(make, model, year), numDoors(numDoors) {}

void Car::display() const {
    std::cout << "Car - Make: " << make << ", Model: " << model
              << ", Year: " << year << ", Number of Doors: " << numDoors << std::endl;
}
