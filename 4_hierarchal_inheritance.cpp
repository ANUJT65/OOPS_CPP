#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    string parentName;

    Parent(string name) {
        this->parentName = name;
    }
};

class Child1 : public Parent {
public:
    string childName;
    int age;

    Child1(string parentName, string childName, int age)
        : Parent(parentName) {
        this->childName = childName;
        this->age = age;
    }

    void getter() {
        cout << "\n--- Child1 Info ---" << endl;
        cout << "Parent: " << parentName << endl;
        cout << "Child1: " << childName << endl;
        cout << "Age: " << age << endl;
    }
};

class Child2 : public Parent {
public:
    string childName;
    string school;

    Child2(string parentName, string childName, string school)
        : Parent(parentName) {
        this->childName = childName;
        this->school = school;
    }

    void getter() {
        cout << "\n--- Child2 Info ---" << endl;
        cout << "Parent: " << parentName << endl;
        cout << "Child2: " << childName << endl;
        cout << "School: " << school << endl;
    }
};

int main() {
    Child1 c1("Ramesh", "Neha", 14);
    Child2 c2("Ramesh", "Varun", "Greenwood High");

    c1.getter();
    c2.getter();

    return 0;
}
