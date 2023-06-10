#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <string>

class Car : public Vehicle {
public:
    Car(const std::string& make, const std::string& model, int year, int numDoors);
    void display() const override;
private:
    int numDoors;
};

#endif // CAR_H
