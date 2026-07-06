#include <bits/stdc++.h>
using namespace std;

struct Employee {

    int id;
    string name;
    double salary;

};

int main() {

    Employee e;

    cin >> e.id;
    cin >> e.name;
    cin >> e.salary;

    cout << "\nID = " << e.id;
    cout << "\nName = " << e.name;
    cout << "\nSalary = " << e.salary;

    return 0;
}