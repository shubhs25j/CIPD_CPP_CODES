#ifndef __FLIGHT
#define __FLIGHT
#include <iostream>
#include <cstring>
class Flight
{
    int flightNo;
    std::string destination;
    float distance;
    float fuel;

public:
    Flight(){}//default constructor
    Flight(int flNo, std::string des, float dis);//parameterized constructor
    void calculateFuelQuantity();//check fuel 
    void feedinfo();//function to add data
    void showInfo();//function to display data
};
#endif
