#include "animal.h"
#include "pet.h"

int main() {
    // Create instances of Animal and Pet
    Animal* animal = new Animal("Lion", "Roar");
    Pet* pet = new Pet("Dog", "Bark", "shubham");

    // Make sounds of the objects
    animal->makeSound();
    pet->makeSound();

    // Clean up memory
    delete animal;
    delete pet;

    return 0;
}
