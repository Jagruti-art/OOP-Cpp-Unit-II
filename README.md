# OOP C++ Unit II - Inheritance: Practical Programming CIE Activity

## Student Information
- **Student Name**: Jagruti Patil
- **PRN**: [Enter PRN Here]
- **Class / Division**: S.Y. B.Tech Artificial Intelligence and Data Science
- **Course Name**: Object Oriented Programming with C++
- **Course Code**: ADPC303
- **Unit**: Unit II - Inheritance

---

## Repository Structure
```text
OOP-Cpp-Unit-II/
├── README.md
├── Program_01/
│   └── program01.cpp
├── Program_02/
│   └── program02.cpp
└── Program_03/
    └── program03.cpp
```

---

## List of Programs & Descriptions

### 1. Program 01: Employee Payroll System (`Program_01/program01.cpp`)
- **Real-Time Application**: An enterprise payroll management system for managing compensation across diverse employment categories.
- **OOP Concepts Demonstrated**:
  - Base class (`Employee`) and derived classes (`FullTimeEmployee`, `PartTimeEmployee`, `Intern`).
  - Hierarchical inheritance.
  - Protected member variables (`empId`, `name`, `department`).
  - Pure virtual function (`virtual double calculateSalary() const = 0`) creating an abstract base class.
  - Constructor chaining and member function overriding.

### 2. Program 02: Digital Payment Gateway (`Program_02/program02.cpp`)
- **Real-Time Application**: A payment gateway engine supporting multiple transaction channels (Credit Card, UPI, Net Banking) with unified processing.
- **OOP Concepts Demonstrated**:
  - Abstract base class (`PaymentMethod`) with pure virtual `processPayment()`.
  - Virtual destructor for safe polymorphic resource cleanup.
  - Runtime polymorphism using modern C++ smart pointers (`std::vector<std::unique_ptr<PaymentMethod>>`).
  - Data abstraction and encapsulation.

### 3. Program 03: Vehicle Fleet Management (`Program_03/program03.cpp`)
- **Real-Time Application**: A logistics management platform tracking commercial vehicle fleets including trucks, delivery vans, and delivery bikes.
- **OOP Concepts Demonstrated**:
  - Hierarchical inheritance with base class `Vehicle` and derived classes `Truck`, `DeliveryVan`, `Bike`.
  - Base class method re-use (`Vehicle::displayInfo()`).
  - Function overriding and polymorphic execution using `std::unique_ptr<Vehicle>`.
  - Protected data members for derived class accessibility.

---

## Compilation & Execution Instructions

You can compile and run each program using any modern C++ compiler (g++ with C++14/C++17 support):

```bash
# Compile and run Program 01
g++ -std=c++17 Program_01/program01.cpp -o Program_01/program01
./Program_01/program01

# Compile and run Program 02
g++ -std=c++17 Program_02/program02.cpp -o Program_02/program02
./Program_02/program02

# Compile and run Program 03
g++ -std=c++17 Program_03/program03.cpp -o Program_03/program03
./Program_03/program03
```
