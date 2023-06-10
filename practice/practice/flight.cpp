#include<iostream>
#include<cstring>

class Flight
{
    int flightNo;
    std::string destination;
    float distance;
    float fuel;
    public:
    Flight()
    {
        // std::cout<<"Enter the flight No: \n";
        // std::cin>>flightNo;
        // std::cout<<"Enter destination: \n";
        // std::cin>>destination;
        // std::cout<<"Enter distance: \n";
        // std::cin>>distance;
    }
    Flight(int flNo,std::string des,float dis,float ful)
    {
        flightNo=flNo;
        destination=des;
        distance=dis;
        fuel=ful;
    }
    float calculateFuelQuantity()
    {
        if(distance<=1000)
        {
            std::cout<<"The fuel quantity should be 500 lit\n\n";
            fuel=500;
        }
        else if(distance>1000 && distance<=2000)
        {
            std::cout<<"The fuel quantity should be 1100 lit\n\n";
            fuel=1100;
        }
        else if(distance>2000)
        {
          std::cout<<"The fuel quantity should be 2200 lit\n\n"; 
            fuel=2200; 
        }
        return fuel;
    }
    // void feedinfo()
    // {
    //     std::cout<<"Enter the flight No: \n";
    //     std::cin>>flightNo;
    //     std::cout<<"Enter destination: \n";
    //     std::cin>>destination;
    //     std::cout<<"Enter distance: \n";
    //     std::cin>>distance;
    //     calculateFuelQuantity();
    // }
    // void showInfo()
    // {
    //     std::cout<<"Flight no   :"<<flightNo<<"\n";
    //     std::cout<<"Destination :"<<destination<<"\n";
    //     std::cout<<"Distance    :"<<distance<<"\n";
    //     std::cout<<"Fuel        :"<<fuel<<"\n";
    // }

    int getFlightNo() const { return flightNo; }
    void setFlightNo()
     { 
         std::cout<<"Enter the flight No: \n";
        std::cin>>flightNo;
      }

    std::string getDestination() const { return destination; }
    void setDestination() 
    { 
     std::cout<<"Enter destination: \n";
        std::cin>>destination;
     }

    float getDistance() const { return distance; }
    void setDistance() 
    { 
    std::cout<<"Enter distance: \n";
        std::cin>>distance;
     }

    float getFuel() const { return fuel; }
    void setFuel()
     {
        fuel=calculateFuelQuantity();
     }

    // float getDistance() const { return distance; }
    // void setDistance(float distance_)
    //  { distance = distance_; }
};
Flight feedinfo()
    {
        Flight f1;
        f1.setFlightNo();
        f1.setDestination();
        f1.setDistance();
        f1.calculateFuelQuantity();
        return f1;

    }
    void showInfo()
    {
        Flight f1;
        std::cout<<"Flight no   :"<<f1.getFlightNo()<<"\n";
        std::cout<<"Destination :"<<f1.getDestination()<<"\n";
        std::cout<<"Distance    :"<<f1.getDistance()<<"\n";
        std::cout<<"Fuel        :"<<f1.getFuel()<<"\n";
    }
int main()
{
    Flight f1;
    

}
