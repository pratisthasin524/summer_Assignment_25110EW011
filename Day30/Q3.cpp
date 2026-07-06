#include <bits/stdc++.h>
using namespace std;

struct Employee {

    int id;
    string name;
    double salary;

};

int main() {

    Employee e[3];

    for(int i = 0; i < 3; i++)
        cin >> e[i].id >> e[i].name >> e[i].salary;

    cout << "\nEmployee Details\n";

    for(int i = 0; i < 3; i++)
        cout << e[i].id << " "
             << e[i].name << " "
             << e[i].salary << endl;

    return 0;
}