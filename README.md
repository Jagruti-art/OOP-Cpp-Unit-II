# C++ Programming Project - CIE Activity

## Student Details
- **Name**: Jagruti Patil
- **PRN**: 125UAD1189
- **Class/Division**: S.Y. B.Tech (AI & DS)
- **Course Name**: Object Oriented Programming with C++ (ADPC303)
- **Unit**: Unit II - Inheritance

---

## Repository Structure
```
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

## List of Programs

### 1. Program 01: Employee Payroll System
- **File**: `Program_01/program01.cpp`
- **Description**: This program shows hierarchical inheritance using a base class `Employee` and derived classes `FullTimeEmployee`, `PartTimeEmployee`, and `Intern`. It calculates salary for different types of employees using a pure virtual function.

### 2. Program 02: Digital Payment Gateway
- **File**: `Program_02/program02.cpp`
- **Description**: This program demonstrates runtime polymorphism using an abstract base class `PaymentMethod` and derived classes `CreditCardPayment`, `UPIPayment`, and `NetBankingPayment`. It processes different payment methods using smart pointers (`unique_ptr`).

### 3. Program 03: Vehicle Fleet Management
- **File**: `Program_03/program03.cpp`
- **Description**: This program uses inheritance to manage different vehicles (`Truck`, `DeliveryVan`, and `Bike`) derived from a base class `Vehicle`. It overrides the `displayInfo()` function to show details of each vehicle in the fleet.

---

## How to Run the Programs

```bash
# Program 1
g++ Program_01/program01.cpp -o program01
./program01

# Program 2
g++ Program_02/program02.cpp -o program02
./program02

# Program 3
g++ Program_03/program03.cpp -o program03
./program03
```
