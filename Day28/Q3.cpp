#include <bits/stdc++.h>
using namespace std;

int main() {

    int seats = 10;
    int book;

    cout << "Available Seats = " << seats << endl;

    cout << "Enter Seats to Book: ";
    cin >> book;

    if(book <= seats) {
        seats -= book;
        cout << "Booking Successful\n";
        cout << "Remaining Seats = " << seats;
    }
    else {
        cout << "Seats Not Available";
    }

    return 0;
}