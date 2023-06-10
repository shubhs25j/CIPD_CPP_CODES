#include<iostream>
#include<cstring>
#include"date.h"
void Date:: display()
    {
        std::cout<<date<<" / "<<month<<" / "<<year<<"\n";
    }

 Date::Date(int d,int m,int y)
    {
        date=d;
        month=m;
        year=y;
    }