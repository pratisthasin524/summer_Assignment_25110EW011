#include <bits/stdc++.h>
using namespace std;

class Bank {

public:

    double balance = 5000;

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {

        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void display() {
        cout << "Balance = " << balance;
    }
};

int main() {

    Bank b;

    b.deposit(2000);
    b.withdraw(1000);
    b.display();

    return 0;
}