#include <bits/stdc++.h>
using namespace std;

struct Contact {

    string name;
    string phone;

};

int main() {

    Contact c;

    cout << "Enter Name: ";
    cin >> c.name;

    cout << "Enter Phone: ";
    cin >> c.phone;

    cout << "\nSaved Contact\n";
    cout << c.name << endl;
    cout << c.phone;

    return 0;
}