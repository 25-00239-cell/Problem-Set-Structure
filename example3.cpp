#include <iostream>
using namespace std;

struct Car {
    char brand[20];
    char model[20];
    int year;
    float mileage;
};

float calculateDepreciation(float mileage) {
    if (mileage < 10000) {
        return 0;
    } else if (mileage < 50000) {
        return 10;
    } else if (mileage < 100000) {
        return 20;
    } else {
        return 30;
    }
}

void displayCarDetails(Car c) {
    cout << "\nCar Details:" << endl;
    cout << "Brand: " << c.brand << endl;
    cout << "Model: " << c.model << endl;
    cout << "Year: " << c.year << endl;
    cout << "Mileage: " << (int)c.mileage << endl;
    cout << "Depreciation: " << calculateDepreciation(c.mileage) << "%" << endl;
}

int main() {
    Car car;
    
    cout << "Enter the brand of the car: ";
    cin.getline(car.brand, 20);
    
    cout << "Enter the model of the car: ";
    cin.getline(car.model, 20);
    
    cout << "Enter the year of the car: ";
    cin >> car.year;
    cin.ignore();
    
    cout << "Enter the mileage of the car: ";
    cin >> car.mileage;
    
    displayCarDetails(car);
    
    return 0;
}
