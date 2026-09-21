#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

// ============================================================================
// Real-Time Application 3: Vehicle Fleet Management
// Problem Scenario:
// A logistics company manages trucks, delivery vans, and delivery bikes.
// All are vehicles with common identity and fuel attributes, while each
// has specialized properties.
//
// OOP Concepts Used:
// - Base and derived classes
// - Hierarchical inheritance
// - Function overriding
// - Virtual functions
// - Protected data
// ============================================================================

// Base class Vehicle
class Vehicle {
protected:
    string vehicleId;
    string registrationNumber;
    double fuelLevel;

public:
    Vehicle(string vid, string reg)
        : vehicleId(vid), registrationNumber(reg), fuelLevel(100.0) {}

    void startEngine() const {
        cout << "Vehicle " << vehicleId << " engine started." << endl;
    }

    void refuel(double amount) {
        fuelLevel += amount;
        if (fuelLevel > 100.0) {
            fuelLevel = 100.0;
        }
    }

    virtual void displayInfo() const {
        cout << "Vehicle ID: " << vehicleId
             << " | Registration: " << registrationNumber
             << " | Fuel: " << fuelLevel << "%" << endl;
    }

    virtual ~Vehicle() = default;
};

// Derived class Truck
class Truck : public Vehicle {
private:
    double cargoCapacity;

public:
    Truck(string vid, string reg, double capacity)
        : Vehicle(vid, reg), cargoCapacity(capacity) {}

    void displayInfo() const override {
        cout << "Truck | ";
        Vehicle::displayInfo();
        cout << "Cargo capacity: " << cargoCapacity << " tonnes" << endl;
    }
};

// Derived class DeliveryVan
class DeliveryVan : public Vehicle {
private:
    int packageCount;

public:
    DeliveryVan(string vid, string reg, int packages)
        : Vehicle(vid, reg), packageCount(packages) {}

    void displayInfo() const override {
        cout << "Delivery Van | ";
        Vehicle::displayInfo();
        cout << "Packages loaded: " << packageCount << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
private:
    bool hasDeliveryBox;

public:
    Bike(string vid, string reg, bool hasBox)
        : Vehicle(vid, reg), hasDeliveryBox(hasBox) {}

    void displayInfo() const override {
        cout << "Delivery Bike | ";
        Vehicle::displayInfo();
        cout << "Delivery box: " << (hasDeliveryBox ? "Available" : "Not available") << endl;
    }
};

int main() {
    // Vector of smart pointers managing base class Vehicle objects
    vector<unique_ptr<Vehicle>> fleet;
    fleet.push_back(make_unique<Truck>("V001", "MH12-AB-1234", 10.5));
    fleet.push_back(make_unique<DeliveryVan>("V002", "MH12-CD-5678", 50));
    fleet.push_back(make_unique<Bike>("V003", "MH12-EF-9012", true));

    cout << "=== Fleet Status ===" << endl;
    for (const auto& vehicle : fleet) {
        vehicle->startEngine();
        vehicle->displayInfo();
        cout << endl;
    }

    return 0;
}
