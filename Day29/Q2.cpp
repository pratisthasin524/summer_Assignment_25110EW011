#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;

    do {

        cout << "\n1.Display";
        cout << "\n2.Maximum";
        cout << "\n3.Minimum";
        cout << "\n4.Exit";

        cin >> choice;

        switch(choice) {

            case 1:
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2:
                cout << *max_element(arr, arr + n);
                break;

            case 3:
                cout << *min_element(arr, arr + n);
                break;

        }

    } while(choice != 4);

    return 0;
}