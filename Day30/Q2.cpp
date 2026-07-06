#include <bits/stdc++.h>
using namespace std;

struct Book {

    int id;
    string name;

};

int main() {

    Book b[2];

    for(int i = 0; i < 2; i++)
        cin >> b[i].id >> b[i].name;

    cout << "\nBooks\n";

    for(int i = 0; i < 2; i++)
        cout << b[i].id << " "
             << b[i].name << endl;

    return 0;
}