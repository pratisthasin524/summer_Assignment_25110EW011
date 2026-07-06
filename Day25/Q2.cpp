#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1, s2;
    cin >> s1 >> s2;

    bool visited[256] = {false};

    for (char ch : s1)
        visited[ch] = true;

    for (char ch : s2) {

        if (visited[ch]) {
            cout << ch << " ";
            visited[ch] = false;
        }
    }

    return 0;
}