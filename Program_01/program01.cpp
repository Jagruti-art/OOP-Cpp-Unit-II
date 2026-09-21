#include <iostream>
#include <string>
using namespace std;

// ============================================================================
// Real-Time Application 1: Employee Payroll System
// Problem Scenario:
// A company employs full-time employees, part-time employees, and interns.
// All employees share common information, but salary calculations vary by
// employment type.
//
// OOP Concepts Used:
// - Base class and derived classes
// - Protected members
// - Hierarchical inheritance
// - Constructor chaining
// - Function overriding
// - Abstract base class
// ============================================================================

// Base class Employee
class Employee {
protected:
    int empId;
    string name;
    string department;

public:
    // Parameterized constructor
    Employee(int id, string n, string dept)
        : empId(id), name(n), department(dept) {}

    // Display basic information common to all employees
    void displayBasicInfo() const {
        cout << "ID: " << empId
             << " | Name: " << name
             << " | Department: " << department;
    }

    // Pure virtual function for polymorphic salary calculation
    virtual double calculateSalary() const = 0;

    // Virtual destructor for safe cleanup
    virtual ~Employee() = default;
};

// Derived class for full-time employees
class FullTimeEmployee : public Employee {
private:
    double monthlySalary;

public:
    // Constructor chaining to base class
    FullTimeEmployee(int id, string n, string dept, double salary)
        : Employee(id, n, dept), monthlySalary(salary) {}

    // Overriding salary calculation for fixed monthly pay
    double calculateSalary() const override {
        return monthlySalary;
    }

    void display() const {
        displayBasicInfo();
        cout << " | Type: Full-Time | Salary: Rs. "
             << calculateSalary() << endl;
    }
};

// Derived class for part-time employees
class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    // Constructor chaining to base class
    PartTimeEmployee(int id, string n, string dept, double rate, int hours)
        : Employee(id, n, dept), hourlyRate(rate), hoursWorked(hours) {}

    // Overriding salary calculation: hourly rate * hours worked
    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }

    void display() const {
        displayBasicInfo();
        cout << " | Type: Part-Time | Salary: Rs. "
             << calculateSalary() << endl;
    }
};

// Derived class for interns
class Intern : public Employee {
private:
    double stipend;

public:
    // Constructor chaining to base class
    Intern(int id, string n, string dept, double stipendAmount)
        : Employee(id, n, dept), stipend(stipendAmount) {}

    // Overriding salary calculation: fixed stipend
    double calculateSalary() const override {
        return stipend;
    }

    void display() const {
        displayBasicInfo();
        cout << " | Type: Intern | Stipend: Rs. "
             << calculateSalary() << endl;
    }
};

int main() {
    FullTimeEmployee f1(101, "Amit", "IT", 65000);
    PartTimeEmployee p1(102, "Sneha", "HR", 250, 120);
    Intern i1(103, "Rohan", "Marketing", 15000);

    cout << "=== Employee Payroll ===" << endl;
    f1.display();
    p1.display();
    i1.display();

    return 0;
}
