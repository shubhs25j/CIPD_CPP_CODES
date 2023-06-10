#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    Vehicle(const std::string& make, const std::string& model, int year);
    virtual ~Vehicle();
    virtual void display() const;
protected:
    std::string make;
    std::string model;
    int year;
};

#endif // VEHICLE_H
