#include <iostream>
#include <string>
using namespace std;

class Father {
public:
    string fatherName;

    Father(string name) {
        this->fatherName = name;
    }
};

class Mother {
public:
    string motherName;

    Mother(string name) {
        this->motherName = name;
    }
};

class Child : public Father, public Mother {
public:
    string childName;
    int age;

    Child(string fatherName, string motherName, string childName, int age)
        : Father(fatherName), Mother(motherName) {
        this->childName = childName;
        this->age = age;
    }

    void getter() {
        cout << "\n--- Details ---" << endl;
        cout << "Father: " << fatherName << endl;
        cout << "Mother: " << motherName << endl;
        cout << "Child: " << childName << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Child c("Raj", "Sita", "Aryan", 10);
    c.getter();

    return 0;
}
