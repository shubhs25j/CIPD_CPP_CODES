#include<iostream>
#include<cstring>
#include"student.h"

int student :: rolno=000;
void student::show()
{
    std::cout<<"The name of student is "<<stdName<<"\n";
    std::cout<<"The roll number of student is"<<roll_no<<"\n";
    std::cout<<"The marks of student is"<<marks<<"\n";
}
void student ::check_passed_exam()
{
    if(marks>35)
    std::cout<<"congratulations you are passed\n";
    else
    std::cout<<"failed!!!!\n";
}
void fun()
{
    student *s3=new student;
    s3->show();
    s3->check_passed_exam();
    delete s3;
    
}
