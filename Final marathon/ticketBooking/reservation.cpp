#include "reservation.h"
#include"exception.h"
#include <iostream>

Reservation::Reservation() {
    numberOfPassengers = 0;
}

void Reservation::bookTicket(std::string name, int age) {
    if (numberOfPassengers >= MAXIMUM_SEATS) {
        throw passException("No seats available.");
    }

    passengers[numberOfPassengers] = Passenger(name, age);
    numberOfPassengers++;
}

int Reservation::countNumberOfPassengers()
{
    return numberOfPassengers;
}

void Reservation::showDetails() {
    for (int i = 0; i < numberOfPassengers; i++) {
        passengers[i].display();
        std::cout << std::endl;
    }
}

void Reservation::searchPassengerDetailsByName(std::string name) {
    bool passengerFound = false;

    for (int i = 0; i < numberOfPassengers; i++) {
        if (passengers[i].getPassengerName() == name) {
            passengers[i].display();
            passengerFound = true;
            break;
        }
    }

    if (!passengerFound) {
        std::cout << "Passenger not found." << std::endl;
    }
}
