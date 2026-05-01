#include<iostream>
using namespace std;

class Teller; 

class BankAccount {
private:
    string accountHolder;
    double balance;
    int pin;

public:
    BankAccount(string name, double bal, int p) {
        accountHolder = name;
        balance = bal;
        pin = p;
    }

    friend class Teller;
};

class Teller {
public:
    void display(BankAccount &acc) {
        cout << "Account Holder: " << acc.accountHolder << endl;
        cout << "Balance: " << acc.balance << endl;
    }

    void deposit(BankAccount &acc, double amount) {
        acc.balance += amount;
    }

    void withdraw(BankAccount &acc, double amount) {
        if (amount <= acc.balance)
            acc.balance -= amount;
        else
            cout << "Insufficient balance\n";
    }

    bool validatePIN(BankAccount &acc, int enteredPin) {
        return acc.pin == enteredPin;
    }
};