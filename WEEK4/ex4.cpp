#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string ownerName;
    int accountNumber;
    double balance;
public:
    BankAccount() : ownerName("Unknown"), accountNumber(0), balance(0.0) {}

    BankAccount(string name, int accNum, double bal)
        : ownerName(name), accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds.\n";
    }
    void displayAccount() const {
        cout << "Owner: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;
    BankAccount acc2("Alice", 12345, 500.0);
    acc1.deposit(100.0);
    acc1.withdraw(50.0);

    acc2.deposit(200.0);
    acc2.withdraw(100.0);

    cout << "Account 1 details:\n";
    acc1.displayAccount();

    cout << "\nAccount 2 details:\n";
    acc2.displayAccount();
}