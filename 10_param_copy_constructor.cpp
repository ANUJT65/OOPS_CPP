#include <iostream>
using namespace std;

class Student {
public:
    string name;

    // ✅ Default Constructor
    Student() {
        this->name = "Unknown";
        cout << "Default constructor called" << endl;
    }

    // ✅ Parameterized Constructor
    Student(string name) {
        this->name = name;
        cout << "Parameterized constructor called for " << this->name << endl;
    }

    // ✅ Copy Constructor
    Student(const Student& s) {
        this->name = s.name;
        cout << "Copy constructor called for " << this->name << endl;
    }

    // ✅ Destructor
    ~Student() {
        cout << "Destructor called for " << this->name << endl;
    }
};

int main() {
    cout << "--- Creating s1 ---" << endl;
    Student s1("Anuj");

    cout << "--- Creating s2 as copy of s1 ---" << endl;
    Student s2 = s1;

    cout << "--- Creating s3 using default constructor ---" << endl;
    Student s3;

    cout << "--- End of main ---" << endl;
    return 0;
}
