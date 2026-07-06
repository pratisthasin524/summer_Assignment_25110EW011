#include <bits/stdc++.h>
using namespace std;

int main() {

    double basic, hra, da, total;

    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;

    total = basic + hra + da;

    cout << "Total Salary = " << total;

    return 0;
}