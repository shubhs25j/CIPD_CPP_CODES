#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int EmpId;
    string EmpName;
    double BasicSal;

public:
    // Default constructor
    Employee() {
        EmpId = 0;
        EmpName = "";
        BasicSal = 0.0;
    }

    // Parameterized constructor
    Employee(int id, string name, double salary) {
        EmpId = id;
        EmpName = name;
        BasicSal = salary;
    }

    void acceptDetails() {
        cout << "Enter employee ID: ";
        cin >> EmpId;
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, EmpName);
        cout << "Enter basic salary: ";
        cin >> BasicSal;
    }

    void displayDetails() {
        cout << "Employee ID: " << EmpId << endl;
        cout << "Employee Name: " << EmpName << endl;
        cout << "Basic Salary: " << BasicSal << endl;
    }
};

class Manager : public Employee {
private:
    double PetrolAllowance;
    double FoodAllowance;
    double OtherAllowance;

public:
    Manager() : Employee() {
        PetrolAllowance = 0.07 * BasicSal;
        FoodAllowance = 0.11 * BasicSal;
        OtherAllowance = 0.04 * BasicSal;
    }

    Manager(int id, string name, double salary) : Employee(id, name, salary) {
        PetrolAllowance = 0.07 * BasicSal;
        FoodAllowance = 0.11 * BasicSal;
        OtherAllowance = 0.04 * BasicSal;
    }

    double calculateGrossSalary() {
        return BasicSal + PetrolAllowance + FoodAllowance + OtherAllowance;
    }

    double calculateNetSalary() {
        double grossSalary = calculateGrossSalary();
        double PF = 0.125 * BasicSal;
        return grossSalary - PF;
    }

    void displayDetails() {
        Employee::displayDetails();
        cout << "Petrol Allowance: " << PetrolAllowance << endl;
        cout << "Food Allowance: " << FoodAllowance << endl;
        cout << "Other Allowance: " << OtherAllowance << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
        cout << "Net Salary: " << calculateNetSalary() << endl;
    }
};

class MarketingExecutive : public Employee {
private:
    int KilometersTravelled;
    int TourAllowance;
    double TelephoneAllowance;

public:
    MarketingExecutive() : Employee() {
        KilometersTravelled = 0;
        TourAllowance = 0;
        TelephoneAllowance = 2000.0;
    }

    MarketingExecutive(int id, string name, double salary) : Employee(id, name, salary) {
        KilometersTravelled = 0;
        TourAllowance = 0;
        TelephoneAllowance = 2000.0;
    }

    double calculateGrossSalary() {
        return BasicSal + TourAllowance + TelephoneAllowance;
    }

    double calculateNetSalary() {
        double grossSalary = calculateGrossSalary();
        double PF = 0.125 * BasicSal;
        return grossSalary - PF;
    }

    void acceptDetails() {
        Employee::acceptDetails();
        cout << "Enter kilometers travelled: ";
        cin >> KilometersTravelled;
        TourAllowance = 5 * KilometersTravelled;
    }

    void displayDetails() {
        Employee
