#include "animal.h"
#include <iostream>

Animal::Animal(const std::string& name, const std::string& sound)
    : name(name), sound(sound) {}

Animal::~Animal() {}

void Animal::makeSound() const {
    std::cout << name << " makes a sound: " << sound << std::endl;
}
