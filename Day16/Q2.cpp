#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int freq[1001] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int element = arr[0];

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            element = arr[i];
        }
    }

    cout << "Element = " << element << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}