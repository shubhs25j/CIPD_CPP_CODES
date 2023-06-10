#include "indoorplant.h"
#include <iostream>

IndoorPlant::IndoorPlant(const std::string& name, const std::string& type, const std::string& location)
    : Plant(name, type), location(location) {}

void IndoorPlant::display() const {
    std::cout << "Indoor Plant - Name: " << name << ", Type: " << type
              << ", Location: " << location << std::endl;
}
