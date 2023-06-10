#ifndef ENGGSTUDENT_H
#define ENGGSTUDENT_H

#include <iostream>
#include "student.h"

class Enggstudent : public Student
{
    int practicalMarks;
    int projectMarks;

public:
    Enggstudent();
    Enggstudent(int r, std::string sname, int m[], int pracmarks, int projmarks);
    ~Enggstudent();
    void display();
    void accept();

    int getPracticalMarks() const { return practicalMarks; }
    void setPracticalMarks(int practicalMarks_) { practicalMarks = practicalMarks_; }

    int getProjectMarks() const { return projectMarks; }
    void setProjectMarks(int projectMarks_) { projectMarks = projectMarks_; }
};
#endif // ENGGSTUDENT_H
