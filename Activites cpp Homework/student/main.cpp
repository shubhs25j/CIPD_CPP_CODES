#include<iostream>
#include<cstring>
#include"student.h"

int main()
{
    Student s1;
    s1.show();
    Student s2("Shubham jagadale",Date(25,02,2000));
    s2.show();
    Student s3;
    s3.accept();
    s3.show();
}