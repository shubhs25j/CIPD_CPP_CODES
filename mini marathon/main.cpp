#include<iostream>
#include<cstring>
#include"flight.h"
int main()
{
    Flight f1;
    f1.feedinfo();
    f1.showInfo();
    Flight f2(2552,"Pune",1001);
    f2.showInfo();
    Flight *f3= new Flight;
    f3->feedinfo();
    f3->showInfo();
     Flight *f4= new Flight(2556,"Mumbai",500);
     f4->showInfo();
     delete f3;
     delete f4;
}