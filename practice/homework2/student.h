// #ifdef __STUDENT
// #define __STUDENT
#include<iostream>
#include<cstring>
void fun();

class student
{
    std::string stdName;
    double marks;
    static int rolno;
    int roll_no;
    public:
    student()
    {   rolno++;
        roll_no=rolno;
        stdName="####";//name
        marks= 00;//marks
    }
    student(std::string name,double mar)
    {
        rolno++;
        roll_no=rolno;
        stdName=name;
        marks=mar;
    }
    void show();
    void check_passed_exam();
};
// #endif