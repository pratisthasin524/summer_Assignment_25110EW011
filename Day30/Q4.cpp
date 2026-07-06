#include <bits/stdc++.h>
using namespace std;

struct Student {

    int roll;
    string name;
    float marks;

};

int main() {

    Student s[5];

    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        cout << "\nEnter Roll Name Marks: ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
    }

    cout << "\nStudent Details\n";

    for(int i = 0; i < n; i++) {

        cout << "Roll : " << s[i].roll << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "Marks : " << s[i].marks << endl;
        cout << "-------------------" << endl;
    }

    return 0;
}