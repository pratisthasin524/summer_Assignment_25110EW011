#include <bits/stdc++.h>
using namespace std;

struct Item {

    int id;
    string name;
    int quantity;

};

int main() {

    Item i;

    cin >> i.id;
    cin >> i.name;
    cin >> i.quantity;

    cout << "\nItem Details\n";

    cout << i.id << endl;
    cout << i.name << endl;
    cout << i.quantity;

    return 0;
}