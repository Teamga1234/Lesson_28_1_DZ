#pragma once
#include "Car.h"
class Truck : public Car
{
    double carrying_capacity; 
public:
    
    Truck(string b, string c, double v, double fc, double capacity)
        : Car(b, c, v, fc), carrying_capacity(capacity) {}

    void setCarryingCapacity(double capacity) { carrying_capacity = capacity; }
    double getLoadCapacity() const { return carrying_capacity; }

    double calculateCostPerTonPerKm(double fuelPrice) const {
        return ((fuelConsumption / 100) * fuelPrice) / carrying_capacity;
    }
    void showInfo() const {
        Car::showInfo();
        cout << "Вантажопідйомність: " << carrying_capacity << " тонн" << endl;
    }
    ~Truck() {}
};

