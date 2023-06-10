#include<iostream>
#include<cstring>
#include"flight.h"

    
   Flight::Flight(int flNo,std::string des,float dis)//float ful)
    {
        flightNo=flNo;
        destination=des;
        distance=dis;
        // fuel=ful;
    }
    void Flight::calculateFuelQuantity()
    {
        if(distance<=1000)
        {
            // std::cout<<"The fuel quantity should be 500 lit\n";
            fuel=500;
        }
        else if(distance>1000 && distance<=2000)
        {
            // std::cout<<"The fuel quantity should be 1100 lit\n";
            fuel=1100;
        }
        else if(distance>2000)
        {
        //   std::cout<<"The fuel quantity should be 2200 lit\n"; 
          fuel=2200; 
        }
    }
    void Flight:: feedinfo()//function to add data
    {
        std::cout<<"Enter the flight No: \n";
        std::cin>>flightNo;
        std::cout<<"Enter destination: \n";
        std::cin>>destination;
        std::cout<<"Enter distance: \n";
        std::cin>>distance;
        calculateFuelQuantity();
    }
    void Flight:: showInfo()//function to display data
    {
        std::cout<<"Flight no   :"<<flightNo<<"\n";
        std::cout<<"Destination :"<<destination<<"\n";
        std::cout<<"Distance    :"<<distance<<"\n";
        calculateFuelQuantity();
        std::cout<<"Fuel        :"<<fuel<<"\n\n\n";

    }

