#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    int freq[256] = {0};

    for (char ch : str)
        freq[ch]++;

    int maxFreq = 0;
    char ans;

    for (char ch : str) {

        if (freq[ch] > maxFreq) {
            maxFreq = freq[ch];
            ans = ch;
        }
    }

    cout << "Character = " << ans << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}