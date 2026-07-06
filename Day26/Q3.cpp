#include <bits/stdc++.h>
using namespace std;

int main() {

    int choice;
    double balance = 10000;

    do {

        cout << "\n1.Check Balance";
        cout << "\n2.Deposit";
        cout << "\n3.Withdraw";
        cout << "\n4.Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice == 1)
            cout << "Balance = " << balance;

        else if (choice == 2) {

            double amount;
            cin >> amount;

            balance += amount;
        }

        else if (choice == 3) {

            double amount;
            cin >> amount;

            if (amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient Balance";
        }

    } while (choice != 4);

    return 0;
}