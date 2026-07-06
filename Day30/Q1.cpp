#include <bits/stdc++.h>
using namespace std;

struct Student {

    int roll;
    string name;
    float marks;

};

int main() {

    Student s[3];

    for(int i = 0; i < 3; i++)
        cin >> s[i].roll >> s[i].name >> s[i].marks;

    cout << "\nStudent Records\n";

    for(int i = 0; i < 3; i++)
        cout << s[i].roll << " "
             << s[i].name << " "
             << s[i].marks << endl;

    return 0;
}