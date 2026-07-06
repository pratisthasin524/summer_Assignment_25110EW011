#include <bits/stdc++.h>
using namespace std;

struct Student {

    int roll;
    string name;
    float marks;

};

int main() {

    Student s;

    cin >> s.roll;
    cin >> s.name;
    cin >> s.marks;

    cout << "\nRoll = " << s.roll;
    cout << "\nName = " << s.name;
    cout << "\nMarks = " << s.marks;

    return 0;
}