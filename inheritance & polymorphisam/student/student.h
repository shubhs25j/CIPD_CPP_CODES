#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student
{
    int rollno;
    std::string name;
    int marks[5];

public:
    Student();
    Student(int roll, std::string nam, int m[]);
    void accept();
    void display();
    void calculateScore();
    ~Student();

    int getRollno() const { return rollno; }
    void setRollno(int rollno_) { rollno = rollno_; }

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }
};

#endif // STUDENT_H
