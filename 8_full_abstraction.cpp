#include <iostream>
using namespace std;

class Remote {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class TVRemote : public Remote {
public:
    void turnOn() override {
        cout << "TV is ON" << endl;
    }

    void turnOff() override {
        cout << "TV is OFF" << endl;
    }
};

int main() {
    TVRemote remote;
    remote.turnOn();
    remote.turnOff();
    return 0;
}
