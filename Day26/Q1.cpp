#include <bits/stdc++.h>
using namespace std;

int main() {

    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    int guess;

    do {
        cout << "Enter Guess (1-100): ";
        cin >> guess;

        if (guess > randomNumber)
            cout << "Too High\n";
        else if (guess < randomNumber)
            cout << "Too Low\n";
        else
            cout << "Correct!\n";

    } while (guess != randomNumber);

    return 0;
}