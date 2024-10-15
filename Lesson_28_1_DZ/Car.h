#pragma once
#include <iostream>
#include <string>
using namespace std;
class Car {
protected:
    string brand;
    string color;
    double fuelV;
    double fuelConsumption;

public:
    Car(string b, string c, double v, double fc)
        : brand(b), color(c), fuelV(v), fuelConsumption(fc) {}

    void setBrand(string b) { brand = b; }
    void setColor(string c) { color = c; }
    void setFuelV(double v) { fuelV = v; }
    void setFuelConsumption(double fc) { fuelConsumption = fc; }

   
    string getBrand() const { return brand; }
    string getColor() const { return color; }
    double getFuelV() const { return fuelV; }
    double getFuelConsumption() const { return fuelConsumption; }

    double calculateMaxDistance() const {
        return (fuelV / fuelConsumption) * 100;
    }

    void showInfo() const {
        cout << "Марка: " << brand << endl << "Колір: " << color << endl
            << "Об'єм паливного бака: " << fuelV << endl
            << "Норма споживання: " << fuelConsumption << endl;
            
    }
};

