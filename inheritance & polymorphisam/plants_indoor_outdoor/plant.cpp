#include "plant.h"
#include <iostream>

Plant::Plant(const std::string& name, const std::string& type)
    : name(name), type(type) {}

Plant::~Plant() {}

void Plant::display() const {
    std::cout << "Plant Name: " << name << ", Type: " << type << std::endl;
}
