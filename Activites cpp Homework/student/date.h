#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<cstring>

class Date 
{
    int date;
    int month;
    int year;
    public:
    Date(){}
    // {
    //     date=0;
    //     month=0;
    //     year=0;
    // }
    Date(int d,int m,int y);
    void display();
};

#endif // DATE_H
