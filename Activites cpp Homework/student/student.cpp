#include<iostream>
#include<cstring>
#include"student.h"

int Student:: roll=0;

Student ::Student()
{
    roll++;
    rollNo=roll;
    name="";

}
Student ::Student(std::string nam,const Date& d): dateOfBirth(d)
{
    roll++;
    rollNo=roll;
    name=nam;
    // dateOfBirth=d;
}
void Student::accept()
{
    std::cout<<"Enter the name of student : \n";
    std::cin>>name;

    int day,month,year;
    
    std::cout<<"Enter DOB day,month,year\n";
    std::cin>>day>>month>>year;

    std::cin.ignore();

    dateOfBirth=Date(day,month,year);
}
void Student::show()
{
    std::cout<<"\nRoll no is : "<<rollNo;
    std::cout<<"\nName is :  "<<name;
    std::cout<<"\nDate of birth is : ";
    dateOfBirth.display();

}