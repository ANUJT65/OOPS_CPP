#include <iostream>
using namespace std;

int studentCount = 0;  // ✅ Global counter

class Student {
public:
    string name;

    Student(string n) {
        name = n;
        studentCount++;  // ✅ Increase count without using ::
    }

    void show() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("Sham");
    Student s2("Diya");

    s1.show();
    s2.show();

    cout << "Total students: " << studentCount << endl;  // ✅ No need for Student::count

    return 0;
}
