#include <iostream>
#include "enggstudent.h"

Enggstudent::Enggstudent()
{
    std::cout << "Engg constructor called\n";
    practicalMarks = 0;
    projectMarks = 0;
}
Enggstudent::Enggstudent(int roll, std::string nam, int m[], int pracmarks, int projmarks)
    : Student(roll, nam, m), practicalMarks(pracmarks), projectMarks(projmarks)
{
}
Enggstudent::~Enggstudent()
{
    std::cout << "Enggstudent destructor called\n";
}
void Enggstudent::display()
{
    Student::display();
    std::cout << "Practical Marks : " << practicalMarks << "\n";
    std::cout << "Project marks   : " << projectMarks << "\n";
}
void Enggstudent::accept()
{
}