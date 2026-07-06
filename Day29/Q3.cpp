#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    int choice;

    do {

        cout << "\n1.Length";
        cout << "\n2.Reverse";
        cout << "\n3.Uppercase";
        cout << "\n4.Exit";

        cin >> choice;

        switch(choice) {

            case 1:
                cout << str.length();
                break;

            case 2:
                reverse(str.begin(), str.end());
                cout << str;
                break;

            case 3:

                for(char &c : str)
                    c = toupper(c);

                cout << str;
                break;

        }

    } while(choice != 4);

    return 0;
}