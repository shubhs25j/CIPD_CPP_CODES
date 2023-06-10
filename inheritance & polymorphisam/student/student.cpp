#include <iostream>
#include "student.h"

Student::Student()
{
    std::cout<<"\nStudent ctor called\n ";
    rollno=1;
    name="shubham";
    for(int i=0;i<5;i++)
    {
        marks[i]=0;
    }
}
Student::Student(int roll, std::string nam,int m[])
{
    rollno = roll;
    name = nam;
    for(int i=0;i<5;i++)
    {
        marks[i]=m[i];
    }
}
Student::~Student()
{
      std::cout<<"\n~Student dtor called \n";
}
void Student::accept()
{
    std::cout << "Enter the roll no: \n";
    std::cin >> rollno;
    std::cout << "Enter the name of student: \n";
    std::cin >> name;
    std::cout << "Enter the marks of maths \n";
    std::cin >> marks[0];
    std::cout << "Enter the marks of physics \n";
    std::cin >> marks[1];
    std::cout << "Enter the marks of chem \n";
    std::cin >> marks[2];
    std::cout << "Enter the marks of Bio \n";
    std::cin >> marks[3];
    std::cout << "Enter the marks of  english\n";
    std::cin >> marks[4];
}
void Student ::display()
{
    std::cout << "The roll no is : " << rollno << "\n";
    std::cout << "name of std is : " << name << "\n";
    for(int i=0;i<5;i++)
    {
        std::cout<<"  "<<marks[i];
    }
}
void Student::calculateScore()
{
    float persentage = 1;
    for (int i = 0; i < 5; i++)
    {
        persentage = persentage + marks[i];
    }
    persentage = (persentage / 500) * 100;
    std::cout << "\nThe score is :" << persentage << "\n";
}