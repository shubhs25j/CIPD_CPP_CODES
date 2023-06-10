#include "Passenger.h"
#include <iostream>
#include<cstring>

int Passenger::count = 1;

Passenger::Passenger() {//default constructor
    seatNumber = count++;
    passengerName = "";
    availability = 1;
    age = 0;
}

Passenger::Passenger(std::string name, int age) {
    seatNumber = count++;
    passengerName = name;
    availability = 1;
    this->age = age;
}
void Passenger::display() {
    std::cout << "Seat Number: " << seatNumber << std::endl;
    std::cout << "Passenger Name: " << passengerName << std::endl;
    std::cout << "Availability: " << (availability ? "Available" : "Not Available") << std::endl;
    std::cout << "Age: " << age << std::endl;
}
