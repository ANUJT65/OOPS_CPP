#include <iostream>
#include <string>
using namespace std;

class Grandparent {
public:
    string gpName;

    Grandparent(string name) {
        this->gpName = name;
    }
};

class Parent : public Grandparent {
public:
    string parentName;

    Parent(string gpName, string parentName) : Grandparent(gpName) {
        this->parentName = parentName;
    }
};

class Child : public Parent {
public:
    string childName;
    int age;

    Child(string gpName, string parentName, string childName, int age)
        : Parent(gpName, parentName) {
        this->childName = childName;
        this->age = age;
    }

    void getter() {
        cout << "\n--- Details ---" << endl;
        cout << "Grandparent: " << gpName << endl;
        cout << "Parent: " << parentName << endl;
        cout << "Child: " << childName << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Child c("Dadaji", "Papa", "Beta", 21);
    c.getter();

    return 0;
}
