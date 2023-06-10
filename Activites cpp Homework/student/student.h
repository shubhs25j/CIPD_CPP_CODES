#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<cstring>
#include"date.h"

class Student : public Date
{
    int rollNo;
    std::string name;
    Date dateOfBirth;
    static int roll;
    public:
    Student();
    Student(std::string nam,const Date& d);
    void accept();
    void show();
};

#endif // STUDENT_H
