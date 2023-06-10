#include "reservation.h"
#include"exception.h"
#include <iostream>

int main() {
    Reservation Bus;

    try {
        Bus.bookTicket("shubham", 25);
        Bus.bookTicket("vaishnav", 30);
        Bus.bookTicket("raghav", 40);
        Bus.bookTicket("atharv", 35);
        Bus.bookTicket("radha", 28);

        // Bus.bookTicket("shubham", 25);
        // Bus.bookTicket("atharv", 35);
        // Bus.bookTicket("radha", 28);
        //  Bus.bookTicket("atharv", 35);
        // Bus.bookTicket("radha", 28);
        Bus.bookTicket("radha", 28);
         Bus.bookTicket("atharv", 35);
        Bus.bookTicket("radha", 28);

        // Bus.showDetails();
        Bus.searchPassengerDetailsByName("shubham");
       std::cout<<Bus.countNumberOfPassengers();

    } 
    catch (passException &s) {
        std::cout<<s.getMessage()<<"\n";
    }


    return 0;
}