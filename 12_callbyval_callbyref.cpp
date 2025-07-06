#include <iostream>
using namespace std;

// 1. Swap by Value (no effect outside)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "[Inside swapByValue] a = " << a << ", b = " << b << endl;
}

// 2. Swap by Pointer (modifies original)
void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "[Inside swapByPointer] a = " << *a << ", b = " << *b << endl;
}

// 3. Swap by Reference (modifies original)
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "[Inside swapByReference] a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;

    cout << "Original: x = " << x << ", y = " << y << endl;

    // Swap by Value
    swapByValue(x, y);
    cout << "[After swapByValue] x = " << x << ", y = " << y << " ❌ Not Swapped\n" << endl;

    // Swap by Pointer
    swapByPointer(&x, &y);
    cout << "[After swapByPointer] x = " << x << ", y = " << y << " ✅ Swapped\n" << endl;

    // Swap by Reference
    swapByReference(x, y);
    cout << "[After swapByReference] x = " << x << ", y = " << y << " ✅ Swapped again\n" << endl;

    return 0;
}
