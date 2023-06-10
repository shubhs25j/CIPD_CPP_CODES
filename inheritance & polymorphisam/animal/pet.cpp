#include "pet.h"
#include <iostream>

Pet::Pet(const std::string& name, const std::string& sound, const std::string& owner)
    : Animal(name, sound), owner(owner) {}

void Pet::makeSound() const {
    std::cout << name << " owned by " << owner << " makes a sound: " << sound << std::endl;
}
