#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    bool visited[256] = {false};

    for (char ch : str) {

        if (!visited[ch]) {
            cout << ch;
            visited[ch] = true;
        }
    }

    return 0;
}