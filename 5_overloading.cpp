#include <iostream>
using namespace std;

class Printer {
public:
    void print(int num) {
        cout << "Printing integer: " << num << endl;
    }

    void print(string text) {
        cout << "Printing string: " << text << endl;
    }

    void print(string text, int copies) {
        cout << "Printing '" << text << "' " << copies << " times." << endl;
    }
};

int main() {
    Printer p;
    p.print(100);                  
    p.print("Hello");              
    p.print("Report", 3);          
    return 0;
}
