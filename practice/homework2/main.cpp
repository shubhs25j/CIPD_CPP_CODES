#include<iostream>
#include<cstring>
#include"student.h"

int main()
{
    student s1;
    student *s2= new student(student("shubham",32));
    s1.show();
    s1.check_passed_exam();
    s2->show();
    s2->check_passed_exam();
    

    fun();
    delete s2;
    // delete s3;
}