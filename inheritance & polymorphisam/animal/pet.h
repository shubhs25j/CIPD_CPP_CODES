#ifndef PET_H
#define PET_H

#include "animal.h"
#include <string>

class Pet : public Animal {
public:
    Pet(const std::string& name, const std::string& sound, const std::string& owner);
    void makeSound() const override;
private:
    std::string owner;
};

#endif // PET_H
