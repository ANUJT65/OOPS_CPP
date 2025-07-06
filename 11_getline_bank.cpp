#include <iostream>
#include <unordered_map>
using namespace std;

class Customer {
public:
    string name;
    double balance;

    Customer() {
        name = "";
        balance = 0.0;
    }

    Customer(string name, double balance) {
        this->name = name;
        this->balance = balance;
    }

    void display() {
        cout << "Name: " << name << ", Balance: ₹" << balance << endl;
    }
};

// Global hashmap simulating database
unordered_map<int, Customer> bankDB;

// Function to create a new account
void createAccount() {
    int accNo;
    string name;
    double balance;

    cout << "Enter Account Number: ";
    cin >> accNo;

    if (bankDB.count(accNo)) {
        cout << "⚠️ Account already exists!\n";
        return;
    }

    cout << "Enter Customer Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    bankDB[accNo] = Customer(name, balance);
    cout << "✅ Account created successfully.\n";
}

// Deposit amount
void deposit() {
    int accNo;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNo;

    if (!bankDB.count(accNo)) {
        cout << "❌ Account not found!\n";
        return;
    }

    cout << "Enter amount to deposit: ";
    cin >> amount;

    bankDB[accNo].balance += amount;
    cout << "✅ Deposit successful.\n";
}

// Withdraw amount
void withdraw() {
    int accNo;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNo;

    if (!bankDB.count(accNo)) {
        cout << "❌ Account not found!\n";
        return;
    }

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (bankDB[accNo].balance >= amount) {
        bankDB[accNo].balance -= amount;
        cout << "✅ Withdrawal successful.\n";
    } else {
        cout << "❌ Insufficient balance!\n";
    }
}

// Check balance
void checkBalance() {
    int accNo;
    cout << "Enter Account Number: ";
    cin >> accNo;

    if (!bankDB.count(accNo)) {
        cout << "❌ Account not found!\n";
        return;
    }

    bankDB[accNo].display();
}

// Main menu
void showMenu() {
    cout << "\n=== BANKING SYSTEM ===\n";
    cout << "1. Create Account\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Check Balance\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: cout << "👋 Exiting...\n"; break;
            default: cout << "⚠️ Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
