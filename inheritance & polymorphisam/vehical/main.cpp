#include "vehicle.h"
#include "car.h"

int main() {
    // Create instances of Vehicle and Car
    Vehicle* vehicle = new Vehicle("ABC Motors", "Sedan", 2022);
    Car* car = new Car("Shre gurudatta Automobiles", "Hatchback", 2023, 5);

    // Display information about the objects
    vehicle->display();
    car->display();

    // Clean up memory
    delete vehicle;
    delete car;

    return 0;
}
