#include <iostream>
using namespace std;

class Parent {
public:
    void greet() {
        cout << "Hello from Parent" << endl;
    }
};

class Child : public Parent {
public:
    void greet() {  
        cout << "Hello from Child" << endl;
    }
};

int main() {
    Child c;
    c.greet();      

    Parent p;
    p.greet();   

    return 0;
}
