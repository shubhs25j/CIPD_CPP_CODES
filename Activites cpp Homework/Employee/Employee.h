// Write a class Employee for an application which will have data members for 
// employee id, employee name and salary. 
// Provide the following functionalities in Employee class.
// 1. Initialing objects using default and parameterized constructors.
// 2. Accepting and displaying the information of employee from console
// class Employee{
//     int emp_id;
//     char emp_name[20];
//     double salary;
// public:
//       Employee();      
//       Employee(int, char*, double);
//       void Accept();
//       void Display();
//       };
// In "main" function declare an array of Employee objects.
// Write a menu driven program to -
// a. Insert record into an array.
// b.Update information of specific employee on the basis of emp_id accepted from user
// c.Display all records.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<cstring>

class Employee
{
    int emp_id;
    // char emp_name[20];
    std::string emp_name;
    double salary;
    public:
    Employee();      
    Employee(int, std::string , double);
    void Accept();
    void Display();

    int empId() const { return emp_id; }
    void setEmpId(int empId) { emp_id = empId; }

    std::string empName() const { return emp_name; }
    void setEmpName(const std::string &empName) { emp_name = empName; }

    double getSalary() const { return salary; }
    void setSalary(double salary_) { salary = salary_; }

};

#endif // EMPLOYEE_H
