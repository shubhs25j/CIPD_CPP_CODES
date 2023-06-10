#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal(const std::string& name, const std::string& sound);
    virtual ~Animal();
    virtual void makeSound() const;
protected:
    std::string name;
    std::string sound;
};

#endif // ANIMAL_H
