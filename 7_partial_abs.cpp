#include <iostream>
using namespace std;

class Vehicle {
public:
    // Pure virtual function (must be overridden)
    virtual void start() = 0;

    // Concrete function (has implementation)
    void fuelType() {
        cout << "Uses petrol or diesel" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike started with kick." << endl;
    }
};

int main() {
    Bike b;
    b.start();      // overridden function
    b.fuelType();   // inherited concrete function
    return 0;
}
