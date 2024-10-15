#include "Truck.h"
int main()
{
	setlocale(0, "");
    Car car("Toyota", "Синій", 50, 8);
    car.showInfo();
    cout << "Максимальна відстань на повному баку: " << car.calculateMaxDistance() << " км" << endl;

    Truck truck("Mercedes", "Чорний", 150, 25, 20);
    truck.showInfo();
    double fuelPrice = 50;
    cout << "Собівартість перевезення однієї тонни на 1 км: " << truck.calculateCostPerTonPerKm(fuelPrice) << endl;
}

