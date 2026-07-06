#include <bits/stdc++.h>
using namespace std;

int main() {

    int score = 0;
    char ans;

    cout << "Q1. Capital of India?\n";
    cout << "a) Delhi\nb) Mumbai\nc) Chennai\n";
    cin >> ans;

    if (ans == 'a')
        score++;

    cout << "Q2. 5 + 3 = ?\n";
    cout << "a)7\nb)8\nc)9\n";
    cin >> ans;

    if (ans == 'b')
        score++;

    cout << "Q3.Who won ICC Men's T20 World Cup\n";
    cout << "a)New Zealand\nb)England\nc)India\nd)South Africa\n";
    cin >> ans;

    if (ans == 'c')
        score++;
    cout << "Score = " << score;

    return 0;
}